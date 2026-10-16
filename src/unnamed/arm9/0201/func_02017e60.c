struct S { int a, b, c; };
extern struct S data_0209d3c4[];
void func_02017e60(void){
  unsigned int i;
  struct S *p = data_0209d3c4;
  for(i=0;i<12;i++,p++){
    p->a=-1; p->b=0; p->c=0;
  }
}

/* arm9-data-run 0x0208EBAC data */
#pragma push
#pragma explicit_zero_data on
unsigned int data_0208ec4c[5] = {
    0x4352412F, 0x45564948, 0x7365632F, 0x72616E2E, 0x00000063,
};
unsigned int data_0208ec38[5] = {
    0x4352412F, 0x45564948, 0x3373762F, 0x72616E2E, 0x00000063,
};
unsigned int data_0208ec24[5] = {
    0x4352412F, 0x45564948, 0x6665632F, 0x72616E2E, 0x00000063,
};
unsigned int data_0208ec10[5] = {
    0x4352412F, 0x45564948, 0x3273762F, 0x72616E2E, 0x00000063,
};
unsigned int data_0208ebfc[5] = {
    0x4352412F, 0x45564948, 0x3173762F, 0x72616E2E, 0x00000063,
};
unsigned int data_0208ebe8[5] = {
    0x4352412F, 0x45564948, 0x6565632F, 0x72616E2E, 0x00000063,
};
unsigned int data_0208ebd4[5] = {
    0x4352412F, 0x45564948, 0x316E652F, 0x72616E2E, 0x00000063,
};
unsigned int data_0208ebc0[5] = {
    0x4352412F, 0x45564948, 0x6965632F, 0x72616E2E, 0x00000063,
};
unsigned int data_0208ebac[5] = {
    0x4352412F, 0x45564948, 0x3172612F, 0x72616E2E, 0x00000063,
};
unsigned int data_0208ec60[5] = {
    0x4352412F, 0x45564948, 0x6765632F, 0x72616E2E, 0x00000063,
};
#pragma pop
/* end arm9-data-run 0x0208EBAC */
