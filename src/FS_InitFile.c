#include "types.h"
void FS_InitFile(int *s)
{
    s[0] = 0;
    s[1] = s[0];
    *(u16*)((char*)s + 0x18) = 0;
    s[2] = 0;
    s[4] = 0xc;
    s[3] = 0;
}

#pragma force_active on
unsigned char data_020a7fc0[4];
