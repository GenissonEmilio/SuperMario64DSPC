"""Check portrait storage against the ROM and emit production provider requests.

Run from the repository root with the pinned compiler and extracted ROM installed:
    python notes/experiments/ov007-portrait-correction1018.py
This experiment has no dependency on scripts or fixtures under build/.
"""
import io
import json
from pathlib import Path
import re
import struct
import sys

ROOT = Path(__file__).resolve().parents[2]
sys.path.insert(0, str(ROOT / "tools"))
import build_pin
import match
import tubuild
from elftools.elf.elffile import ELFFile


def check():
    entry = json.loads((ROOT / "config/tu_manifest.d/ov007/AnimationPathSets.json").read_text())
    source = ROOT / entry["source"]
    raw = match.compile_c(source, "2004/b56", build_pin.flags_for(source))
    assert raw, "Pinned compilation failed"
    elf = ELFFile(io.BytesIO(raw))
    symbols = elf.get_section_by_name(".symtab")
    definitions = {s.name: s for s in symbols.iter_symbols()
                   if isinstance(s["st_shndx"], int) and s["st_size"]}
    objects = entry["rodata"] + entry["data"]
    addresses = {r["symbol"]: int(r["address"], 0) for r in objects}
    licenses = {int(r["source"], 0): r for r in entry["relocations"]}
    configured = {}
    for line in (ROOT / "config/arm9/overlays/ov007/relocs.txt").read_text().splitlines():
        m = re.search(r"from:0x([0-9a-f]+) kind:load to:0x([0-9a-f]+) module:(\S+)", line)
        if m:
            configured[int(m[1], 16)] = (int(m[2], 16), m[3])
    relocations = 0
    for field, section in (("rodata", ".rodata"), ("data", ".data")):
        for row in entry[field]:
            symbol = definitions[row["symbol"]]
            sec = elf.get_section(symbol["st_shndx"])
            start, size = addresses[symbol.name], int(row["size"], 0)
            assert sec.name == section, (symbol.name, sec.name, section)
            # Retain the pre-migration section boundary, independently of routing.
            assert (start < 0x020d7db8) == (section == ".rodata"), symbol.name
            assert bool(sec["sh_flags"] & 1) == (section == ".data"), symbol.name
            assert symbol["st_size"] == size and symbol["st_info"]["bind"] == row["binding"]
            offset = symbol["st_value"]
            payload = bytearray(sec.data()[offset:offset + size])
            for relsec in elf.iter_sections():
                if relsec["sh_type"] not in ("SHT_REL", "SHT_RELA") or relsec["sh_info"] != symbol["st_shndx"]:
                    continue
                assert relsec["sh_type"] == "SHT_RELA"
                for rel in relsec.iter_relocations():
                    local = rel["r_offset"] - offset
                    if not 0 <= local < size:
                        continue
                    target = symbols.get_symbol(rel["r_info_sym"]).name
                    assert rel["r_info_type"] == 2 and rel["r_addend"] == 0
                    destination = addresses[target] if target in addresses else int(target.rsplit("_", 1)[1], 16)
                    license = licenses[start + local]
                    assert license["symbol"] == target and int(license["target_address"], 0) == destination
                    assert license["target_module"] == "ov007"
                    assert configured[start + local] == (destination, "overlay(7)")
                    struct.pack_into("<I", payload, local, destination)
                    relocations += 1
            assert bytes(payload) == build_pin.target_bytes("ov007", start, size), symbol.name
    assert relocations == len(entry["relocations"])
    claims = [dict(name=s["name"], start=int(s["start"], 0), end=int(s["end"], 0)) for s in entry["sections"]]
    prepared, _, errors = tubuild.prepare_owned_nontext_section_order(raw, entry, claims)
    assert not errors, errors
    report = tubuild.verify_owned_sections(prepared, entry, claims)
    assert report["ok"], report
    out = ROOT / "build/portrait-correction"
    out.mkdir(parents=True, exist_ok=True)
    requests = [dict(module="ov007", symbol=r["symbol"], source=entry["source"], size=int(r["size"], 0)) for r in objects]
    (out / "requests.json").write_text(json.dumps(requests, indent=2) + "\n")
    (out / "native.json").write_text(json.dumps(report, indent=2) + "\n")
    print(f"PASS: {len(objects)} objects, {sum(r['size'] for r in requests):,} bytes, {relocations} exact data relocations; original section kinds preserved.")


if __name__ == "__main__":
    check()
