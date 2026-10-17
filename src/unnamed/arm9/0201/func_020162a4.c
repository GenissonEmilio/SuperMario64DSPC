extern void func_02045e2c(int obj, int i, int a, int b);
void func_020162a4(int obj, int i) {
    func_02045e2c(obj + 8, i, *(int *)(obj + 0x64),
                  (*(unsigned int *)(obj + 0x70) << 4) >> 16);
}

/* arm9-data-run 0x0208E7E4 data */
#pragma push
#pragma explicit_zero_data on
extern unsigned int data_0208e7e4[4] ;
#pragma pop
/* end arm9-data-run 0x0208E7E4 */
