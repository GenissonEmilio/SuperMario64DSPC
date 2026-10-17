extern void func_020147bc(unsigned short* r0, int r1);

void nds_print(unsigned short* dst, volatile signed char* str) {
    while (*str != 0) {
        func_020147bc(dst, *str);
        ++dst;
        ++str;
    }
}

/* arm9-data-run 0x0208E714 data */
#pragma push
#pragma explicit_zero_data on
extern unsigned int _ZTI8dClipper[2] ;
extern unsigned int _ZTS8dClipper[5] ;
#pragma pop
/* end arm9-data-run 0x0208E714 */
