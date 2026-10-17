#include "types.h"

/* bss 0x020a8114..0x020a8124 */
u32 data_020a8114[4];

extern u32 _ZN3IRQ7DisableEv(void);
extern void _ZN3IRQ7RestoreEj(u32 prev);


u32 func_0205ff20(void) {
    u32 saved = _ZN3IRQ7DisableEv();
    u32 r2 = data_020a8114[0];
    if (r2 != 0) {
        _ZN3IRQ7RestoreEj(saved);
        return 0;
    }
    data_020a8114[0] = 1;
    _ZN3IRQ7RestoreEj(saved);
    return 1;
}
