# Player interface repair after PR #2879

Producer task: `player-interface-repair-0921`, session `codex-player-producer-0921`.
The actual producing child is the continuing `repair2747` session. Root
`codex-integrator-0920` owns publication and merge order; a different session must
review this candidate. This is producer evidence, not independent Source acceptance.

Input and tested main: `17273b5add8ac4a7590437bdc2831a926c030498`.
Main already contains the original Player PR at
`d83ca862f987cb5a081e0c5cca21aa691abdcd4a`; its source is the starting control,
and its author history is preserved. This follow-up repairs the remaining interfaces.

The user approved the exact reserved-interface packet with raw SHA256
`d9ce5a7c08ab9c29c81b273887f1a392882d97637b4432a1260c5f24da2525e0`.
Only two declarations in `include/decl_common.h` change their result to `void`:
`GiveHealth` and `func_0204fa2c`. EndMusic's ARM9 name and source enrollment change
at the same address and size. The older Jump, Decimal and declaration-baseline
reservations remain intact under this specific exception. Attribution is read-only.
The promotion queue belongs to the coordinator and is also unchanged here.

## Source and interface changes

Player keeps its partial 301-function production span
`ov002:[0x020bd828,0x020cfea4)`. The three previously described problem helpers
use ordinary local `Player*` views and existing fields of the same scalar width.
`St_Swim_Main` calls the real `GetHealth()` member. These bounded improvements do
not establish that every possible typed-field replacement matches: raw-width and
signedness seams remain, including a four-byte access where the header has a byte.
The existing undeferred code generation and SetAnim optimization setting remain.

Local audio, animation, particle and state declarations now describe the measured
callee contracts. The SetAnim forwarding helper returns `void`; it no longer
returns a fictitious value from a void call. `Player::Heal` and its actual caller
views return `void`, use ordinary early returns, and call the real void GiveHealth.
The one shared Player header change is `int Heal(int)` to `void Heal(int)`.

`Sound::EndMusic(unsigned int)` uses one player-number argument. All six measured
call sites establish that input; the retail body overwrites incoming r1 before
reading it. This supports a coherent one-argument reconstruction without claiming
unique recovery of the original prototype. SetMusic keeps two consumed arguments.
The canonical EndMusic symbol changes from `_ZN5Sound8EndMusicEjj` to
`_ZN5Sound8EndMusicEj` at `arm9:[0x02012998,0x02012a68)`, still 208 bytes.

The separate stop/fade helper `func_0204fa2c` is genuinely different: its incoming
r1 is forwarded to `func_0204f5a0`, which consumes that scalar. All 16 calls in
15 source files supply it. The repaired definition and changed callers therefore
keep two arguments and return `void`; no dummy argument or invented return value
is introduced. EndMusic's `func_02011dcc` declaration also keeps its actual int
result, which these calls discard.

## Accounting and preserved findings

The 18 logical paths of the approved packet were reconciled individually against
current main. Unchanged source controls accept the exact approved source; the
two common-header returns and five EndMusic identity records are edited on the
newer current text. The declaration baseline loses exactly the 29 specifically
proved healed fingerprints, with no additions or other pruning. The converted
identity is replaced in place and its total remains 2973. The original EndMusic
function-address owner is `tangosdev`; the source rename must retain that lineage.

| Finding | Kind retained | Producer disposition |
| --- | --- | --- |
| TRI2879-01 | acceptance | This follow-up is based on the actual claimed main. Exact candidate gates and independent Source review are still required; historical failure is not erased. |
| TRI2879-02 | correctness | Six inherited audio wrapper declarations are repaired to the actual unsigned result and argument contract. |
| TRI2879-03 | provenance (original evidence observation retained) | The unsupported whole-helper compiler-wall banner is removed. The three measured same-width named-field forms match; broader class reconstruction is not claimed. |
| TRI2879-04 | correctness | The ten measured audio/particle/animation/math/state families and genuine GetHealth call are repaired. Opaque pointer/reference ABI views elsewhere remain explicit partial reconstruction. |
| TRI2879-05 | correctness | The coupled SetAnim, Heal/GiveHealth, EndMusic and stop/fade result/arity chains are repaired together, including real consumers and same-address identity records. |

Original findings and unsuccessful experiments remain in the local review records:
`pr2879-full-source-review.json`, `pr2879-contract-followup-review.json`,
`pr2879-bounded-variants.json`, and the corresponding per-family probe reports.
For example, changing SetAnim result declarations alone failed compilation at its
non-void forwarding helper; repairing the complete chain resolved it. This is not
a compiler limitation. The previous work proved every changed source body and
222 Player-header consumers, but those older proofs are not current-main acceptance.

## Validation checkpoint

The assigned worktree is wired and the pinned canary returned `(True, '2004/b56')`.
Fresh exact-main control/candidate object, relocation, header-consumer, accounting,
declaration and full-ROM gates are in progress at this source checkpoint.
The final handoff update will record their actual outcomes and any inherited
failures before the producer offers the result. No remote publication is performed
by this checkpoint.
