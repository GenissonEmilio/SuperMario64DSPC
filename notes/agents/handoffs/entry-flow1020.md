# Entry step transitions

This document describes this commit; queue task `entry-flow1020` records its
immutable SHA. This is a continuation of accepted `entry-select1018` under
<https://github.com/tangosdev/sm64ds-decomp/issues/4084>, composed on
`f804afd3edb7f97eca252a65fe084a0d164d29e0`. The initial queue input and workflow
pin remain `7a8c5c29570412c8573d41a7736cfc759e8a00eb`. The source was rebased
before publication to preserve newer Entry icon naming and the current language
ratchet baseline. Final verification uses the composed source and build tools.

The producer is `codex-entry-flow-producer1020`, branch `cpp/entry-flow1020`.
Independent verification follows production proof, with source review under
policy `18af52b49b9fb5663d417bdfa86109b7b157aaa3`. The coordinator owns PR
publication and the subsequent course-selection continuation. No merge is
authorized by this task.

## Recovered mechanism

The six method names are inferred from behavior, not preserved Nintendo names:

| Address | Bytes | Method |
|---|---:|---|
| `0211a194` | 124 | `SetSteps(const StepSet *)` |
| `0211a148` | 76 | `ChangeStepsAfterDelay(const StepSet *, s32)` |
| `0211a100` | 72 | `ChangeStepsWithFade(const StepSet *)` |
| `02119d78` | 76 | `UpdateStepDelay()` |
| `02119d3c` | 60 | `EnterStepFadeOut()` |
| `02119cc0` | 124 | `UpdateStepFadeOut()` |

`StepSet` contains enter, behavior, and render member pointers, each eight
bytes. `SetSteps` copies them into the scene and immediately invokes a non-null
enter callback. The pending set pointer occupies scene offset `0x6c`; the class
still occupies `0x288` bytes, and the set occupies `0x18` bytes.

Both scheduling methods preserve the outgoing render callback across installing
the temporary transition set. Set `0211d840` contains a null enter, the delay
updater, and a null render. Set `0211d858` contains the fade enter/updater and a
null render. The initializer's assignments and ROM member-pointer relocations
establish those identities. A signed delay decrements by the existing frame
step and installs the pending set at zero or below. Fade-out increases blend
brightness every other frame to 16, installs the pending set, and enables the
existing restoration ramp in `Behavior`. Comments now distinguish blend
brightness from MASTER_BRIGHT and describe that latter ramp correctly.

Ordinary C++ member-pointer assignments and saved `Step` locals reproduce all
six functions. The former volatile word-copy structs and no-op conditionals
are unnecessary. The fade initializer uses the existing three-argument G2x
header declaration and reproduces the same bytes.

## Caller and ownership boundaries

All fifteen direct callers now use the typed member API. Twelve C callers move
to C++ while retaining their existing free-function identities and other bodies.
The two recovered Entry callers call methods directly. The existing teardown
shadow remains a separate reconstruction boundary. The readiness-wait callback
at `02116e44` and archive-reload callback at `0211977c` now return void: their
only source references are callback records, and both corrected forms reproduce
the ROM. This removes the former return of a void helper and falling off an
integer-returning C++ function.

Most callback-set read declarations use `StepSet`. The `0211d870` and `0211d930`
interfaces retain their existing storage views and explicit casts because their
other consumers and initializer are not reconstructed here. The teardown
interface also retains its legacy argument representation at `0211d810`.
These are deferred interfaces, not measured impossibility claims. No source-owned
callback data or original translation-unit boundary is claimed by this change.

The bounded bookkeeping follows the user's previously approved Entry workflow:
six name-only author-record changes, six inferred-name lineage rows, and forty
existing declaration-baseline path-key moves. Author identities and exception
contents are unchanged. No new declaration or style exception is added. Other
tasks' shared-file reservations remain intact.

## Proof and continuation

Production proof covers all 27 header consumers, 49 functions and 472 strict
relocation destinations, with zero blind/missing/extra/passenger entries.
The full build reproduces 106/106 modules, 11,334 source-built functions and 394
source-owned data claims. Final source/config hashes, commands, static checks,
and independent exact-commit acceptance are retained in queue evidence.
The nine existing stock symbol diagnostics and wider data inventory's one
differing and eleven unnamed records remain distinct from those passing gates.

This is partial Entry reconstruction. The immediate continuation is the
interactive course-selection callbacks and the four-caller readiness interface.
The course index feeds the level-ID table and match-loading path; the earlier
player-selection intro names describe its player-figure/setup assets, not the
interactive course choice. Later work still includes native initialization of
callback sets, the remaining callback bodies and raw scene accesses, the
teardown interface, OAM/network boundaries, and eventual production TU
consolidation. The seven predecessor findings must remain in subsequent review.
