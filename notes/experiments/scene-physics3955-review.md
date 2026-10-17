# Scene and physics readability integration (#3955)

The contributor history at 6cc69f8f7fc627472fdd837ca99eaece0956906d is preserved.
The integration carries the unlanded scene, minigame and physics readability
changes into current production translation units. Stage and Entry shards stay
retired; their substantive improvements and descriptive locals are carried into
the consolidated methods. Existing typed fields, structured control flow,
SaveData access and real SDK calls from main take precedence over older shard
spellings. Current collision ownership is respected: already-landed dBgCh and
KCL loader changes are retained unchanged.

The recovered plain records preserve their original widths and offsets. The
Hanachan vector helper definitions take int pointers; local V2 operands retain
explicit boundary casts. The Memory blink counter is unsigned to agree with
its observed halfword reads. Curling retains the established grab coordinate
and observed angle/speed limits. Fade checks use the real brightness-controller
interface. Remaining raw fields record partial reconstruction rather than a
claim of a complete recovered class.

Compiler-local object names retain canonical manifest identities. A fresh b56
compile emits Panel's 27 eight-byte .data objects at @2228 through @2280 in
steps of two, exactly the existing alias inputs; the canonical output mapping
is unchanged. Trampoline2 emits @1111 as the twelve-byte .bss object aliased to
canonical @1086. Complete production linking checks the mapped storage and
relocations against ROM. Numeric compiler spellings are not source identities.

The generated investigation JSON and patch dumps from the contributor tip are
retired from this candidate; readable source and this provenance summary remain.
The original artifacts remain recoverable from contributor history. No raw ROM
byte dumps are reproduced here.
