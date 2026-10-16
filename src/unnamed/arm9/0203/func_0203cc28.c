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
unsigned int data_02099edc[18] = {
    0x02043C80, 0x02043C78, 0x02043BF8, 0x02043BF0, 0x02043BAC, 0x02043B2C, 0x02043B24, 0x02043AFC,
    0x02043AF8, 0x02043AF0, 0x02043AC8, 0x02043AC4, 0x02043AC0, 0x0204357C, 0x0204349C, 0x02043494,
    0x02043DBC, 0x02043D78,
};
#pragma pop
/* end arm9-data-run 0x02099EDC */
