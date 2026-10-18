# Snowball native course and selector data

This commit adds five native arrays and retains the compiler's own RTTI, type name and full vtable in the Snowball production TU. It adds 484 source-owned bytes: 478 object bytes and six internal natural alignment bytes. It remains a partial reconstruction.

Task `data-snowball-native1018`, issue [4103](https://github.com/tangosdev/sm64ds-decomp/issues/4103), producer `codex-snowball-native1018`, branch `data/snowball-data1018`. Tested source base is `1da09450d80ecaf4357e5a9235631084e4b9a5a5`; active workflow is `18af52b49b9fb5663d417bdfa86109b7b157aaa3`. The queue records the immutable output SHA. Independent acceptance and private PR validation remain subsequent gates; no merge.

## Native layout and names

New `.rodata` is OV006 `[0212f3ac,0212f4c4)`, 280 bytes:

- `sSnowballBitBDriftStates`: two const unsigned bytes `{1,2}` at `0212f3ac`, followed by two natural alignment bytes. `BitB_StatePause` bounds the random index to 0/1 and stores the selected state; the native dispatch table maps states 1/2 to right/left drift.
- `sSnowballBitADriftStates`: the analogous two-byte selection at `0212f3b0`, with two internal alignment bytes, consumed by `BitA_StatePause`.
- `sSnowballBitKinds`: two const ints `{1,2}` at `0212f3b4`. `Bit_PickKind` selects index 0 or 1; the existing kind dispatch table sends values 1/2 to kind B/A. This choice is weighted, not a claim of equal probability.
- Existing semantic identity `sSnowballCourseTiles`: native `u16[33][4]`, 264 bytes at `0212f3bc`. Course generation produces IDs 0 through 32; the renderer loads four u16 tile words at row offsets 0,2,4,6. The declaration expresses that measured row structure.

New `.data` storage is `[0213ffd0,0214009c)`, 204 bytes, extending the already owned 120-byte PMF/profile span to 324 bytes. Native own RTTI is 12 bytes at `0213ffd0`; type-name string is 18 bytes at `0213ffdc`, followed by two alignment zero bytes. `sSnowballTextSpritesByLanguage` is the existing five-pointer view, 20 bytes at `0213fff0`, ordered English, Spanish, French, German, Italian. Its existing shared `void*[]` declaration is retained. `data_ov006_02140000` identifies its fifth pointer, not another object.

Full vtable storage is 152 bytes from `02140004`: the first two words are zero and own RTTI, followed by 144 public bytes at `0214000c`. The old explanation of eight trailing null bytes was incorrect; these are the ABI prefix. Native RTTI/name `STB_LOPROC` and vtable GLOBAL bindings remain intact. All 45 new relocation destinations retain their complete configured module alternatives, including `overlays(0,4)`.

The three selector names are inferred from these consumers, not recovered original identifiers. Their old numeric identities and new spellings are mapped in the experiment report. No existing ledger row uses those three addresses, and no ledger or shared-header change is made. Compiler ABI identities retain their original compiler spelling.

## Preserved source and remaining work

All 80 previous definitions, 47 emitted functions and 416 relocations are unchanged after normalizing only the three selector spellings. This includes the complete 396-byte native initializer with 18 relocation sites and its four-byte ctor entry. Existing 128-byte state-table BSS and 120-byte PMF/profile data remain owned. No PMF signature or initializer rewrite is part of this change.

Four path strings beginning at `0214009c` remain ROM-owned: the shared generated header declares scalar char views and is reserved by `jump-contract-repair-0918` ([PR2747](https://github.com/tangosdev/sm64ds-decomp/pull/2747)). Far sprite/OAM data also remains unfinished. There is no header workaround or ownership reclamation. Existing raw record views, free constructor/camera helpers, Fix12 declarations, include order and optimizer pragmas remain measured source constraints.

The old Snowball probe was blocked by `gate4057-main1018`; fresh queue `043f30b046e46f23511beaaf5c57a21124ecb7f6` shows that task done before the successful new reservation. Fully paginated open-PR paths and exact eight shared OV006 config diffs showed no overlapping proposed source or range. Trampoline2 ends exactly at `0212f3ac`, a half-open boundary adjacent to this new range. Other open config proposals are not modified or merged.

All 27 predecessor findings are retained, including unrelated historical scopes, alongside nine current findings in `notes/experiments/data-snowball-native1018.json`. Their accepted history is not a claim to re-author another class or tool. Current manifest rationale also corrects unsupported ancestor-TU ownership, coined-name impossibility, DSD-local-format and obsolete temporary-name statements while preserving every binding/rename policy.

## Proof

Final producer normal production proof passes. Native whole-object comparison, five nontext contribution checks and all 79 nontext destinations pass. The final-config source-independent control and six-range scratch both reproduce all 106 modules and the full ROM SHA256 `d1506e90efae5e2d2cf119926a4ac2a291bd5ca78349d09d5024e1a918c478e8`. Nine baseline strict-symbol diagnostics remain, with zero new; that census is not green. All 44 explicit strict functions, including the initializer, pass with zero warnings. Standalone TU verify separately reports 43/43 text matches and retains its existing initializer classification refusal.

Private scripts and evidence live under `build/` in `C:/tmp/sm64ds-snowball-data1018`; compiler/ROM inputs and queue receipts are not committed. The final provider checker proves all 27 requests, full 152-byte vtable, fifth-pointer zero-storage alias, complete new ranges, retained initializer/ctor and excluded storage from actual linked module bytes. Final immutable evidence records input hashes and committed-blob identity. No class or original-TU completion is claimed.

The default normal build verifies all 27 requests: 23 initialized objects and four existing BSS objects. All 372 current data claims, 247 BSS claims, 11,334 functions and 106 modules pass; the full ROM matches the control hash above. Final module bytes prove the 280-byte rodata span, 324-byte data span, 152-byte full vtable, 396-byte initializer/18 relocations and four-byte ctor. The fifth language pointer remains a zero-size GLOBAL identity at `02140000`, with no additional storage. All 116 excluded path-string bytes remain `_dsd_gap@ov006_27.o`; the following .init region still belongs to its existing Heyho provider.

The final checker rehashes 7,172 input/artifact bindings. Runtime completed immediately before final documentation and commit; exact committed-input identity is additionally recorded in immutable producer evidence. Ten unrelated JSON-identical manifest serializations were restored before this normal binding. The broad optional raw-data scan reports one existing unrelated ARM9 `dCcAcPos_c` vtable identity differing in two legacy objects; that diagnostic is separate from the passing actual-provider and full-ROM proof.

Validation commands include `tubuild.py verify ov006/dScMgSnowball_c`, explicit `prepush_linkcheck.py --files src/minigames/d_s_mg_snowball.cpp`, baseline and candidate `tubuild.py linkcheck` with `-j16`, and `rombuild.py -j16 --report-json build/snowball-production.json --data-provenance-requests build/snowball-requests.json`. Source style, declaration agreement, coverage (+484 bytes, zero loss), manifest conflicts, rename ledger, port references and dead references pass. No shared header or declaration-consumer policy was changed.
