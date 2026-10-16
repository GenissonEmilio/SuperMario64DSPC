unsigned int data_02086ff4[30] = {
    0x00000000, 0x07ffffff, 0x00000fc2, 0x00000400, 0x00094780, 0x0001b4e0, 0x07ffffff, 0x000dfe60, 0x00131d00, 0x00a2105b, 0x00000000, 0x000aec00, 0x00000f21, 0x00000f21, 0x00024780, 0x0001b4e0, 0x07ffffff, 0x00130000, 0x00150000, 0x00a6105b, 0xf8000000, 0x000aec00, 0x0000083e, 0x0000083e, 0x00002000, 0x00000000, 0x00000000, 0x00130000, 0x00150000, 0x0006105b
};extern unsigned char data_0209f1f8;

extern int func_0200e55c(int);
extern int func_0200e4e4(int);
extern int func_ov002_020f7d74(int a,void* b,void* c,void* d);
int func_0200e494(void* c,void* r1,void* r2){
  int r=func_0200e55c(*(unsigned char*)((char*)c+1));
  if(r==0){
    r=func_0200e4e4(*(unsigned char*)((char*)c+1));
    if(r==0) return 0;
  }
  return func_ov002_020f7d74(r,c,r1,r2);
}
