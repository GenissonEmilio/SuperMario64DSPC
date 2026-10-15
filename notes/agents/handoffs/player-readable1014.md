# Handoff: player-readable1014 current composition

This commit preserves the complete two-pass Player readability candidate and
records the current production proof. PR #3867 was merged externally by
`andrewboudreau` at `50bfcd2d6af2ad888194b52153b9d757ac7b3fbf`. That entire
tracked tree is literally the tested source checkpoint below. This evidence-only
follow-up awaits fresh independent verification; Player class reconstruction
remains partial under issue #3785.

## Identity and scope

The original producer is `codex-player-readable1014`, candidate `ded8ac7ebd974a0512164a35580aaf808a4723bc`,
base `132347a5a8d617de18c0de31b0b598788fa08329`. The current producer is
`codex-player-readable-current-root-producer1015`; the original branch and all
historical evidence are preserved. The supported stale-composition rework keeps
the full 612-function scope and continues from that original candidate.

The actual current source checkpoint is `ae7a3725efbaad95e90d5f7b35555991321f323e` and tested base is
`ea91964403017ecbc9482492397b11bc90d7d785`. Player.cpp is literally the original candidate's Source blob
`05810f9c4e729e79f3d576f5297910ce8fcf5fec`. Headers, layouts, manifests, symbols, enrollment,
helper policies and attribution are unchanged. The normal complete delink owns
ov002 `[0x020bccfc, 0x020e67a8)`:612 functions and 257 changed bodies.

The original 676 scalar replacements,581 removed mangled call sites,71 typed state
records, measured failed simplifications and remaining constraints are preserved
in [the experiment record](../../experiments/player-readability-1014.json).
No constructor, factory or class-completion claim is added by the restack.

## Current byte and production evidence

Four fresh focused compilations cover baseline GitLF, candidate GitLF, physical
CRLF and ordinary production preparation. The three complete RAW objects are
literally identical:364400 B, SHA256
`8578494b097f2690c70bd21119d794a87a1ecd73f115dba65edadb3255190132`. They include 1180 sections,
2287 symbols and 4974 typed relocation records. The618 nonzero functions are the
612 enrolled entries plus six unchanged existing compiler-only helpers.
Ordinary preparation is literally the original result, SHA256
`285238d9b2627e66076e7f73d947bb9346188968fb7d3c5d0c87e42152da23d6`, and the exact object consumed by the current full run.
No allocated nontext output or new helper policy is introduced.

All 612 functions from the fresh current object independently report VERIFIED,
zero differing bytes and zero blind relocations with exact module/name/address/
size/destination checks. The actual current full stock run exited0 in
356.625s:106/106 modules, 11334/11334 functions, 331 data claims and
239 BSS claims. It reused 2752 cached objects; the four fresh focused compilations
are separate. The nine baseline symbol diagnostics and existing global data
advisory remain; no new symbol errors or code mismatches are reported.

Current-base declaration agreement, port references and whitespace checks pass.
The generic prepush command also completed 612 VERIFIED/zero blind in
980.594s in the frozen predecessor worktree. Its exact old head/base and
scoped transfer are explicit in the experiment record: unchanged Player Source,
headers, tools, symbol/relocation/pin inputs, and only unrelated Snowman manifest
prose differs. That scoped result is corroborated by the fresh current 612 checks;
it is not mislabeled as a current full-ROM run. The full-ROM run above is new.

## Source review and remaining work

Independent Source-only preflight covers every 257 changed block: 217 explicit
structural correspondences plus 40 manual residual reviews. All 71 state records /
213 PMF slots were traced: 170 retail targets resolve to genuine Player int/s32
methods with zero adjustment and virtual bit; 43 cleanup slots use the canonical
null descriptor at arm9:0x02086b58. This is Source/ROM-reading corroboration,
not final current-candidate acceptance or recovered original English names.

Retain `PLAYER-READABLE-TEXSEQ-INDEX-BOUND-1015`: four actual texture-sequence
objects and their stride are measured, but the entire legitimate runtime
param1 index population is not range-proved. No valid bad caller is demonstrated.
Metal-model index 4 versus the four-entry header array, undeclared actor slot 0x72c,
raw scalar/vector/matrix/PMF and Fix12 interfaces remain partial. The separate 196 B
C1 is still an extern-C pointer bridge; Player.h lacks an explicit constructor,
and the factory does not yet spell `new Player`. Lifecycle methods, vtables/RTTI
and startup ownership remain outside this 612-function span. Issue #3785 stays open.

Next: claim the exact current immutable report offer in an independent wired worktree,
review all four report findings and the updated handoff, recheck current Source/
object/link/full-build evidence and production enrollment, then publish the
supported verifier output. This task has two stages; task completion alone is
not PR private validation or merge. Publish the reviewed evidence as a separate
follow-up PR; PR #3867 is already merged. No merge is authorized by this handoff.
