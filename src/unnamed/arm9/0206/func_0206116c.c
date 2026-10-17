#include "types.h"

/* bss 0x020a89a8..0x020a89ac */
#pragma force_active on
unsigned char data_020a89a8[4];
#pragma force_active off

void func_0206116c(void)
{
    u16 *p = (u16*)0x027fff96;
    if (*p & 1)
        *p &= ~1;
}
