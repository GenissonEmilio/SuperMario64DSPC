unsigned char data_020a0f08;
static unsigned char data_020a0f08_pad[3];

#include "nitro/fx/fx.h"
typedef short s16;
typedef long long s64;

extern s16 data_02082214[];

void func_0203cc28(int *p, int angle)
{
    int a = (unsigned short)angle >> 4;
    int c = data_02082214[a * 2];
    int s = data_02082214[a * 2 + 1];
    int x = p[0];
    int z = p[1];
    p[0] = FX_MUL(s, x) - FX_MUL(c, z);
    p[1] = FX_MUL(c, x) + FX_MUL(s, z);
}

/* arm9-data-run 0x02099EDC data */
#pragma push
#pragma explicit_zero_data on
extern unsigned int data_02099edc[18] ;
#pragma pop
/* end arm9-data-run 0x02099EDC */
