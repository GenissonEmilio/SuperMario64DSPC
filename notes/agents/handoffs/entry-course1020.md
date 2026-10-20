# Entry course-selection and readiness reconstruction

Task: `entry-course1020`; predecessor: `entry-flow1020`; issue: #4084.
Producer: `codex-entry-course-producer1020`, assisted by the course fixture researcher `header_verify_b`. Independent verifier: `collision_review`; the verifier authored no candidate source. The immutable parent is `1cee85ab5a56ea53a3b43757812e1d2914c9f193` (transition PR #4202). This is a dependent source PR, not a claim of current-main integration or full class completion.

## Recovered behavior

Four native `dScEntry_c` methods replace the former leaves:

| ROM address | Method | Bytes |
| --- | --- | --- |
| `02116d40` | `ArePlayersReady` | 92 |
| `02118cd0` | `RenderCourseSelectTitle` | 76 |
| `02118d1c` | `UpdateCourseSelect` | 540 |
| `02118f38` | `EnterCourseSelect` | 364 |

The interactive state chooses a multiplayer **course**. Its selected index at `0209b2e4` reaches the signed level-ID table at `0211c6ec` through `02116c8c`, then level loading; the resource loader at `02118bf8` uses the same index. Entry loads the selection background/title, creates four course icons and a fifth moving label, and initializes the selected index to the sentinel 4. Update preserves readiness gating, touch/key handling, network action dispatch and the transition to loading or cancellation. Existing `icon_c` fields replace raw scene offsets without changing the class layout.

`ArePlayersReady()` tests readiness flag 0x08 for each active player. The body does not inspect the scene, but all four callers pass it in the retail code. A nonstatic scene method preserves that implicit argument and agrees across the intro, course update and two remaining legacy callbacks. Its result remains an integer 0/1. The single caller of `func_020202dc` takes no arguments; its unused formal parameter is removed with separate ARM9 byte proof.

The initializer's member-pointer assignments establish four inferred callback-set names: `EntryPlayerSelectIntroSteps`, `EntryCourseSelectSteps`, `EntryDelaySteps`, and `EntryFadeOutSteps`. C++ consumers share their `StepSet` declarations in the class header. The C initializer retains its existing P6 storage view and operation order; only its symbol spellings change. No BSS ownership or native initializer is claimed.

## Interfaces and partial reconstruction

The title renderer retains its existing scalar OAM bridge. `include/OAM.h` deliberately excludes this Fix12-by-value overload, and `notes/mwccarm-codegen.md` section 6az documents the caller-side ABI barrier. Its declaration agrees with the enrolled scalar definition in `src/engine/oam/OAM.cpp`. The style exception covers exactly the inherited declaration and single call in the renamed renderer; a matched caller/callee interface recovery remains follow-up work.

Bookkeeping follows the user's bounded Entry metadata authorization: four author-record name updates, eight inferred-name lineage rows, existing declaration-baseline key moves, and the exact two-occurrence inherited OAM bridge exception. Other tasks' reservations and entries are preserved. The readiness disagreement is resolved in source rather than hidden by a new baseline entry. No compiler pragmas are introduced; the two pragmas already present in legacy `0211867c` remain unchanged.

All ten predecessor review findings are carried into the independent review. The readiness finding is resolved by helper-and-caller proof. The wider class scope and table/teardown boundaries remain partial; the waiting renderer's distinct ABI bridge and network declarations remain separate inherited findings.

## Proof and next slice

Local production proof covers 32 source files, 54 functions and 650 strict relocation destinations, with zero blind, missing, extra or passenger entries. The full build reproduces all 106 modules, 11,334 source functions and 394 source-owned data claims. Final immutable source/config hashes and independent acceptance are recorded in queue evidence. The affected closure includes all class-header consumers **and** the changed C initializer and ARM9 getter. Ordinary hybrid-ROM fidelity is distinct from this per-source ownership and destination proof. The nine existing stock-control symbol diagnostics and wider data inventory with one differing and eleven unnamed records are reported separately.

The class is not ready for consolidation. The established text envelope `[02115ab8,0211a854)` contains 82 functions in 60 production sources; after this slice its middle span has 15 native methods and 43 legacy leaves. The neighboring ENTRY factory at `0211a854` remains separately owned. The callback initializer, other raw callback bodies, teardown and remaining OAM/network interfaces still require reconstruction. Older prose counts in the class files/manifests are not used as ownership evidence; current complete delinks are authoritative.

The next coherent slice is match loading: `02118a84` (update), `02118bf8` (the static/free course-resource loader, not a scene method), and `02118c80` (enter), covering `[02118a84,02118cd0)`. The producer retains continuation responsibility under #4084. No merge is requested.
