extern unsigned char DecIfAbove0_Byte(unsigned char* p) {
    if (*p != 0) *p = *p - 1;
    return *p;
}

/* arm9-data-run 0x02099410 data */
#pragma push
#pragma explicit_zero_data on
unsigned int _ZTI10dBgW_KcMbg[3] = {
    0x0209A764, 0x0209941C, 0x020993C8,
};
unsigned int _ZTS10dBgW_KcMbg[6] = {
    0x42643031, 0x4B5F5767, 0x67624D63, 0x00000000, 0x00000000, 0x02099410,
};
unsigned int _ZTV10dBgW_KcMbg[13] = {
    0x0203A470, 0x0203A444, 0x0203A1DC, 0x01FFD920, 0x02039EC0, 0x02039E60, 0x02039CB8, 0x02039970,
    0x02039A3C, 0x02039438, 0x02039930, 0x02039924, 0x02039908,
};
#pragma pop
/* end arm9-data-run 0x02099410 */
