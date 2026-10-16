extern void func_02045e2c(int obj, int i, int a, int b);
void func_020162a4(int obj, int i) {
    func_02045e2c(obj + 8, i, *(int *)(obj + 0x64),
                  (*(unsigned int *)(obj + 0x70) << 4) >> 16);
}

/* arm9-data-run 0x0208E7E4 data */
#pragma push
#pragma explicit_zero_data on
unsigned int data_0208e7e4[4] = {
    0x02015CE8, 0x02015CC4, 0x00000000, 0x0208E764,
};
#pragma pop
/* end arm9-data-run 0x0208E7E4 */
