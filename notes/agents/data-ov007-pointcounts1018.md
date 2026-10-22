# OV007 portrait point counts

[PR #4117](https://github.com/tangosdev/sm64ds-decomp/pull/4117) adds six signed 32-bit count arrays, totaling 740 bytes, to the existing portrait selector carrier. The arrays describe Mario front (30), Mario side (34), Luigi (37), Yoshi plain (20), Yoshi heart (32), and Yoshi star (32). These names are inferred from decoded drawings.

Dispatch uses 36 Luigi strokes; the stored 37th count is 1. The associated pointer arrays also store a complete extra record. Its purpose remains unknown.

| Original rodata interval | Bytes | Arrays |
|---|---:|---|
| `020cef80..020cefd0` | 80 | Yoshi plain |
| `020cf700..020cf778` | 120 | Mario front |
| `020cf8ec..020cf9ec` | 256 | Yoshi star and heart |
| `020cfa70..020cfaf8` | 136 | Mario side |
| `020cfb84..020cfc18` | 148 | Luigi |

Review found that accumulating data in a single address-named function file did not provide a credible source ownership plan. The PR is held as a draft while that is corrected. Previous byte checks do not establish original TU identity. The historical findings remain in the adjacent experiment JSON; superseded measurements remain in Git history.

See [the correction and reproduction instructions](ov007-portrait-correction1018.md). The original source base was `8d866a3620fa342c72cfb56d5d255f484878ced9`; the original candidate was `a0a42091e573db67d0f3ad1788f067c10ee40cb6`.
