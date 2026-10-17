extern unsigned short DecIfAbove0_Short(unsigned short* p) {
    if (*p != 0) *p = *p - 1;
    return *p;
}

/* arm9-data-run 0x020993BC data */
#pragma push
#pragma explicit_zero_data on
extern unsigned int _ZTS7dBgW_Kc[3] ;
unsigned int _ZTI7dBgW_Kc[5] = {
    0x0209A764, 0x020993BC, 0x02099378, 0x00000000, 0x020993C8,
};
extern unsigned int _ZTV7dBgW_Kc[13] ;
#pragma pop
/* end arm9-data-run 0x020993BC */
