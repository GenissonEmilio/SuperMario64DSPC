# OV007 portrait point-count continuation

Issue [#4112](https://github.com/tangosdev/sm64ds-decomp/issues/4112), task `data-ov007-pointcounts1018`. Producer `codex-ov007-pointcounts1018`; tested base `8d866a3620fa342c72cfb56d5d255f484878ced9`. Source branch `data/ov007-pointcounts-main1018`. Predecessor `data-ov007-pathsets-native1018`, accepted `82b09998e4172cff8ac64de6d0ab1aa6a64e4dcb`, was merged externally by [PR #4114](https://github.com/tangosdev/sm64ds-decomp/pull/4114) as `a50654de87cba073510e3e01df7025952bf38136`. This continuation starts on current main rather than treating the squash as ancestry. The carrier, four helpers, OV007 configuration and tools are identical to the accepted predecessor at this base.

Six native signed 32-bit arrays provide **740 new bytes**, retaining the previous 120 selector bytes. Their functional names follow the decoded portrait plots: Mario front, Mario side, Luigi, Yoshi plain, Yoshi heart, and Yoshi star. These are inferred descriptions, not recovered identifiers or an established game-screen identity. The existing carrier remains one reconstructed production file; no historical original-TU claim or source consolidation is made.

| New range | Bytes | Count arrays |
|---|---:|---|
| `020cef80..020cefd0` | 80 | Yoshi plain[20] |
| `020cf700..020cf778` | 120 | Mario front[30] |
| `020cf8ec..020cf9ec` | 256 | Yoshi star[32], Yoshi heart[32] |
| `020cfa70..020cfaf8` | 136 | Mario side[34] |
| `020cfb84..020cfc18` | 148 | Luigi[37] |

The dispatcher still selects 30, 34, 36, 20, 32, 32 strokes. Luigi stores one extra count of 1; the associated imported coordinate/threshold tables also contain a coherent 37th record. The initial research view measured only accessed elements and omitted sixteen bytes across those four arrays. That interpretation is preserved and corrected: all four words are real storage, including three configured pointer relocations, not padding. The unused record's original purpose is unknown.

The new objects add no relocations. Six existing selector-pointer destinations receive their inferred names at unchanged addresses. All six prior carrier definitions, its 312 function bytes and 32 existing relocations remain identical after those exact target-name substitutions. The other four helpers are unchanged; strict proof covers all five functions (812 bytes). Native initialized storage is eleven objects/860 bytes, with no alignment bytes claimed. All24 existing data relocations retain exact configured destinations and `overlay(7)` provenance.

The fully paginated open-PR audit finds no exact carrier/count-range overlap. It does find a shared delinks file with [PR #4106](https://github.com/tangosdev/sm64ds-decomp/pull/4106), audited at `f487f61ac9addec52c46d1556c1ceaac640c156e`. That proposal adds unrelated plain-rodata source claims inside this candidate's named module partition. Future composition must remap those section claims and rerun complete proof. This task neither edits that PR nor claims the combined result is tested.

Named routes split only the module's rodata. The existing data selector range remains ordinary `.data`. Six native rodata slices and seven intervening DSD regions exactly partition the old module rodata interval. Eighteen pointer arrays totaling 2220 bytes and435 shared leaf symbols remain ROM-owned, including the unused Luigi record. The full pointer-family private compiler probe is research only: a conflicting function declaration for one coordinate array in reserved `include/decl_common.h` requires coordinated correction before that migration. No shared header or extra symbol alias is changed here.

## Proof and handoff

`build/native-proof.json` and `build/owned-sections.json` prove native bytes, complete section extents and relocation destinations. `build/control.json` and `build/scratch.json` record the fresh final-configuration control and ordinary TU scratch admission. `build/requests.json` lists all11 actual compiler providers; `build/final-ownership.json` checks the final map, linker selectors, exact symbols, all13 global rodata partition pieces, the18 pointer tables,435 leaf ranges and full ROM.

Reproduce with `python build/prove-native.py`, `python tools/tubuild.py linkcheck --baseline --module ov007 -j16`, `python tools/tubuild.py linkcheck ov007/AnimationPathSets -j16`, then `python tools/rombuild.py -j16 --data-provenance-requests build/requests.json --report-json build/production.json` and `python build/prove-production.py --committed`. Private scripts are evidence helpers, not build dependencies.

Current strict checks: five verified, zero warnings/blind results. Style, declaration ratchet, source coverage (+740/zero giveback), conflict, port, rename-ledger and dead-reference gates pass. Recorded normal result: **PASS**. Nine baseline DSD symbol diagnostics remain distinct from zero new diagnostics. Clean committed-head runtime and input-blob evidence belongs in the immutable queue handoff; any earlier uncommitted measurement remains explicitly historical.

All 18 findings, including the14 inherited findings and their original text, are in `notes/experiments/data-ov007-pointcounts1018.json`. Source reconstruction remains partial for the retained raw layouts, lower allocator contract, original names/TU identity, progress units, historical qualifiers and unowned nested pointer/leaf storage. Independent acceptance and private validation remain separate gates. Publication only; no merge.
