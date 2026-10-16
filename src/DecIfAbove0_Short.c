extern unsigned short DecIfAbove0_Short(unsigned short* p) {
    if (*p != 0) *p = *p - 1;
    return *p;
}

/* arm9-data-run 0x020993BC data */
#pragma push
#pragma explicit_zero_data on
unsigned int _ZTS7dBgW_Kc[3] = {
    0x67426437, 0x634B5F57, 0x00000000,
};
unsigned int _ZTI7dBgW_Kc[5] = {
    0x0209A764, 0x020993BC, 0x02099378, 0x00000000, 0x020993C8,
};
unsigned int _ZTV7dBgW_Kc[13] = {
    0x02039864, 0x0203982C, 0x020396D8, 0x01FFD920, 0x01FFD8D8, 0x01FFD890, 0x01FFD3F8, 0x01FFB0FC,
    0x01FFB830, 0x02039438, 0x02039430, 0x02039428, 0x0203940C,
};
#pragma pop
/* end arm9-data-run 0x020993BC */
