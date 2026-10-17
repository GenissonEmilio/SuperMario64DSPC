extern unsigned char DecIfAbove0_Byte(unsigned char* p) {
    if (*p != 0) *p = *p - 1;
    return *p;
}

/* arm9-data-run 0x02099410 data */
#pragma push
#pragma explicit_zero_data on
extern unsigned int _ZTI10dBgW_KcMbg[3] ;
extern unsigned int _ZTS10dBgW_KcMbg[6] ;
extern unsigned int _ZTV10dBgW_KcMbg[13] ;
#pragma pop
/* end arm9-data-run 0x02099410 */
