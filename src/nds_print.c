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
unsigned int _ZTI8dClipper[2] = {
    0x0209A774, 0x0208E71C,
};
unsigned int _ZTS8dClipper[5] = {
    0x6C436438, 0x65707069, 0x00000072, 0x00000000, 0x0208E714,
};
#pragma pop
/* end arm9-data-run 0x0208E714 */
