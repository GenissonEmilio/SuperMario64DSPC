
extern void func_02045e2c(int obj, int i, int a, short b);
void func_0201628c(int obj, int i) {
    func_02045e2c(obj + 8, i, 0, 0);
}

/* arm9-data-run 0x0208E7AC data */
#pragma push
#pragma explicit_zero_data on
unsigned int _ZTS11dExtModel_c[6] = {
    0x45643131, 0x6F4D7478, 0x5F6C6564, 0x00000063, 0x00000000, 0x0208E74C,
};
#pragma pop
/* end arm9-data-run 0x0208E7AC */
