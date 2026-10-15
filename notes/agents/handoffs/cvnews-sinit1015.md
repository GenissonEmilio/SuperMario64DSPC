# Four-platform lift native initializer experiment

Input: `53dc648eaf7d24847f461a193a3f81203cf4d098`. Worktree: `C:/tmp/sm64ds-cvnews-sinit1015`.

This is a preserved, **nonmatching local candidate**, not an enrolled or publishable source change. The original C initializer, complete delinks, manifest and symbol configuration remain authoritative. Do not cherry-pick this source as a verified production replacement.

The native four resource handles plus four separate Vector3 globals emit the expected 392-byte initializer, four-byte ctor entry and 176-byte BSS (four eight-byte handles, eight twelve-byte registration nodes, four twelve-byte vectors). All 32 owned nontext relocation destinations agree with retail after exact import aliases. The first vector and all resource construction instructions agree. Three remaining vector constructions differ in 13 non-relocated words (initializer offsets 0xa0, 0xa4, 0xa8, 0xac, 0xcc, 0xd0, 0xd4, 0xd8, 0xf4, 0xf8, 0xfc, 0x100, 0x104): native initialization schedules values before loading the destination, while retail loads/stores the fields in sequence.

Measured with pinned 2004/b56: direct initialization; const, volatile and const volatile globals; copy initialization of all four vectors; copy initialization of the last three. All retain the same 13 differences. No shared header was edited and no object bytes or relocations were patched. Existing transform loops still walk four contiguous Vector3 objects from the first address; reconstruct that layout before claiming portable array semantics.

Private ignored evidence: `build/cvnews-original.o`, `cvnews-owned-report.json`, `cvnews-{const,volatile,const-volatile,copy-init,copy-last-three}.o`, `probe-vector-qualifiers.py`, `probe-copy-init.py`, `prepare-cvnews.py`. The preparation script stops at the failing byte assertion, before changing delinks/manifest or retiring C. It is experimental and must start from the pinned original symbol config when reused. The stock full-ROM control passes all 106 modules and reproduces SHA-256 d1506e90efae5e2d2cf119926a4ac2a291bd5ca78349d09d5024e1a918c478e8; its raw symbol audit has the same nine pre-existing errors.

Next owner/action: a future producer may adopt this exact checkpoint, investigate the original vector construction/store shape and prove all 19 unchanged methods plus exact nontext ownership. No PR or merge is authorized for this nonmatching candidate. Independent source acceptance is absent. Current producer moves to another unclaimed native initializer rather than weakening byte checks.
