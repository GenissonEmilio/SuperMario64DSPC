# Player interface repair after PR #2879

Producer task: `player-interface-repair-0921`, session `codex-player-producer-0921`.
The actual producing child is the continuing `repair2747` session. Root
`codex-integrator-0920` owns publication and merge order; a different session must
review this candidate. This is producer evidence, not independent Source acceptance.

Input and tested main: `17273b5add8ac4a7590437bdc2831a926c030498`.
Main contains the original Player PR's exact source from
`d83ca862f987cb5a081e0c5cca21aa691abdcd4a`, squash-landed as
`00ff92baf4c51ef0f7de45405ae7cd4488ab980f` with Andrew's authorship. The original
PR head itself is not an ancestor; the squash history and exact source are preserved.
This follow-up repairs the remaining interfaces.

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
| TRI2879-01 | acceptance | This follow-up is based on the actual claimed main and its local gates pass with the limits below. Independent Source review is still required; historical failure is not erased. |
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

## Validation

Source checkpoint: `25aba22fbaee6d0093e1e9c26c0e32ef7cb94219`. This final handoff
update changes documentation only. Its compiled inputs, enrollment, headers and
accounting are identical to that tested source checkpoint. The pinned canary
returned `(True, '2004/b56')`; all fresh controls use the production flags.

All 316 functions in the ten changed source units verify strictly in both the
exact-main control and candidate: no byte differences or blind relocations.
Eight entire ELF objects are identical. Player and EndMusic differ only in the
canonical EndMusic name: comparing all allocated bytes/layout, symbol attributes
and order, and typed relocation destinations after `Ejj` to `Ej` normalization
proves their identity. ELF string/file offsets and the source-filename symbol are
not semantic output. Player's candidate raw object SHA256 is
`82e7d5fd8b4b281f302ec3c84f70f2c1a0bad2761133a30878a4a955129741ec`.
Player's 301 bodies remain in manifest order; complete-output policies pass with
no unlicensed symbols. The existing licensed Vector3 and V3Quad weak destructors
remain accounted for; this partial run does not emit Player's leaf RTTI/vtable.

The actual two-header expansion contains 864 source files and 3005 function
records, verified in six disjoint partitions with exact multiset reconciliation.
There are 3002 VERIFIED records, no differences, and three warnings:

| Symbol | Module/address | Exact base and candidate |
| --- | --- | --- |
| `_ZN9dScDSMT_c8BehaviorEv` | ov007:0x020cc2cc | BLIND-2 |
| `func_ov089_0213162c` | ov089:0x0213162c | BLIND-1 |
| `__sinit_d_a_star_gate.cpp` | ov100:0x02147a70 | BLIND-3 |

Fresh controls prove the same verdict, blind count and zero differences for each,
with identical complete objects. They remain unresolved relocation coverage,
not VERIFIED functions. The two unchanged NONMATCHING drafts
`_ZN11dScMgJump_c13OnYoshiTryEatEi` and `_ZN12dScStarSel_c8BehaviorEv` are skipped by
the normal prepush policy and are explicitly present in the saved inventory.

The full stock ROM build passes: 106 of 106 exact modules, 11208 reproducing
functions, zero mismatches, all 26 data claims and three BSS claims exact.
The 16777216-byte NDS SHA256 is
`d1506e90efae5e2d2cf119926a4ac2a291bd5ca78349d09d5024e1a918c478e8`.
The separate emitted-metadata report remains 771 verified, 272 partial, three
differing symbols and 278 unnamed. Those three existing differences appear in
eight records: dCcAcPos's vtable and daDemo's anmModel/simpleModel RTTI. Fresh
base/candidate controls prove all eight containing objects identical. The ROM
pass does not turn these emitted-metadata differences into successes.

All 13 static gates pass: source coverage, layout, recorded TU conflicts, dead
references, port references, declarations, attribution, converted identities,
promotion flags, header offsets, rename ledger, profile campaign and the language
mode ratchet against an exact-main control. The whole-tree declaration comparison
heals exactly 29 keys and introduces none; all 29 approved baseline removals are
in that healed set. The real attribution consumer confirms all 316 affected
function-address owners unchanged. EndMusic remains `tangosdev`; both versions
satisfy all five converted criteria, and the total remains 2973.

Reproduction uses `tools/rombuild.py -j 12`, the actual
`prepush_linkcheck.changed_src_files` expansion for the tested base/source range,
and `tools/prepush_linkcheck.py --files` over the six recorded partitions.
The full-object check uses `build_pin.flags_for`, `match.compile_c`, `objisolate`
and `linkcheck` at every enrolled address/size; no relocation words are ignored.
The exact commands, source hashes, partitions and results are retained locally in
the `player-interface-repair-0921` application, byteproof, consumers, warning-controls,
static, declaration-control, credit and inherited-metadata reports.

## Coordinator follow-through and limits

The full queue audit is still red, independently of the passing promotion-flag
gate. The coordinator-owned Player row stores 298 sources, 26953 lines and 13
pragma files. Actual base already has 298 sources, 27078 lines and 12 pragma files;
this repair changes the line count to 27003, a reduction of 75. The exact base
and candidate Tree measurements are saved for the coordinator. No queue row was
edited by this producer, and unrelated stale rows were not regenerated.

This remains a partial Player reconstruction with existing raw state/collision
views and bounded ABI bridges. It makes no new complete-class or original-source
uniqueness claim. Independent review, queue reconciliation and publication belong
to the coordinator's subsequent steps; no branch push, PR or remote handoff is
performed by this producer commit.
