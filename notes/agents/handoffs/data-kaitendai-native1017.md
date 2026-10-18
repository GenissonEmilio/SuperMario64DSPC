# KM3 Kaitendai native rotation and collision data

The existing intact actor TU now provides another 32 bytes: two native `s16`
rotation increments, plus a 24-byte CLPS block consisting of an 8-byte header
and two 8-byte entries. The following eight FF bytes remain unassigned, with
unknown type and ownership. This is a partial reconstruction, not whole-class
completion or a recovered original TU boundary.

| Object | Address | Type and value |
|---|---|---|
| `gKm3KaitendaiRotationIncrement` | ov047:0x02112320 | `s16`, 312 |
| `gKm3KaitendaiAlternateRotationIncrement` | ov047:0x02112324 | `s16`, 624 |
| `gKm3KaitendaiClps` | ov047:0x02111bf4 | 24-byte native header and `CLPS[2]` |

These names are inferred from consumers. Shared setup stores the selected
increment in `mPrevAngleZ`, with a nonzero spawn `mAngleZ` overriding it;
Behavior adds that value to `mPrevAngleY` each frame. The leaf chooses 624
when `param1`'s low byte is 1. Both leaf comments now correctly describe
rotation increments rather than start angles. Shared base source is unchanged.

The CLPS header declares stride 8 and count 2; the entries are `{0xfc0,0xff}`
and `{0xfc4,0xff}`. Runtime collision handle 0x67e resolves to zero-based NitroFS/FAT ID 1232 (0x4d0),
`data/special_obj/km3_kaitendai/km3_kaitendai.kcl`. Its 44 prisms use only
indices 0 (38) and 1 (6). The actual block is const; the explicit conversion
at the existing opaque mutable pointer interface preserves that ABI. Known
property consumers only read it. No raw ROM blob or extra padding object is used.

The compiler emits two-byte input sections for the halfwords. The measured
native linker `ALIGNALL(4)` supplies their two-byte spacing. Module regions
retain their original addresses and kinds except that this proven read-only
24-byte block is now `.rodata`; the preceding unchanged region is `.data_pre`.
The complete source claims include text, initializer, constructor table,
collision data, existing metadata and runtime BSS. The ordinary build consumes
the intact compiler object for all those ranges.

Base: `1b98141e598440a0432317b58678f3c5c088d558`, including the independently
accepted linker-alignment tool. Task `data-kaitendai-native1017`, issue #4061,
workflow `18af52b49b9fb5663d417bdfa86109b7b157aaa3`. Actual source predecessor
is `asset-readability1014`; Cart work is disjoint-range context only. The
shared base remains reserved by `yegg-native-current-dfd-continuation1016`.
The exact numeric-to-inferred name map lives in the owned experiment; there
is no existing ledger row for these three ov047 identities. Address-keyed
attribution and reserved shared declarations are unchanged.

All 28 pre-existing emitted definitions preserve complete bytes and canonical
relocation identities, including the 108-byte initializer. Final-config control,
six-section scratch link and default production reproduce all 106 modules and
the 16 MiB ROM SHA256
`d1506e90efae5e2d2cf119926a4ac2a291bd5ca78349d09d5024e1a918c478e8`.
Twelve actual final-link data/BSS source providers pass input-bound provenance.
The whole-section proof also includes the vtable preamble and initializer/
constructor-table destinations. Nine baseline strict-symbol errors remain;
there are no new errors.

Focused strict verification reports five VERIFIED functions and the existing
initializer BLIND-6 warning, zero blocking. The full initializer raw/relocated
proof is recorded separately, not claimed as a clean standalone result.
Standalone TU verification reports 5/5 text matches and 11 inherited unlicensed
outputs. Its stale 13-output summary was corrected; historical receipts remain.
The optional ROM-data diagnostic is recorded exactly in the experiment.

The experiment retains `ASSET-NAMING-RECONSTRUCTION-01`, adds explicit deferred
handle-layout and shared-interface findings on #4061, and records the fixed
rotation-wording finding. Existing packed handle wrappers, numeric descriptor/
handle names and address-named shared helpers remain future work. Independent
verification and publication follow the immutable queue offer. No merge.
