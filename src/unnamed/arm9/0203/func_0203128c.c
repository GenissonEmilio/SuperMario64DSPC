extern unsigned char* data_0209fd0c;
extern unsigned char NumStars(void);
extern int func_020138dc(void);
extern unsigned char data_02092824[];
extern unsigned short data_02092808[];
extern void func_02031b84(int x);
extern void func_02031028(int x);
extern unsigned char data_0209fca0[];
extern unsigned char data_02092818[];

void func_0203128c(void){
  unsigned char* g;
  int mode;
  int sub;
  int num;
  int seen;
  int i;
  int q;
  int cnt;
  int n2;
  g = data_0209fd0c;
  mode = (unsigned short)(g[4] | (g[3]<<8));
  switch(mode){
  case 0:
    sub = g[5];
    num = 0;
    seen = num;
    cnt = g[6];
    switch(sub){
    case 0:
      num = (cnt - NumStars()) & 0xff;
      break;
    case 1:
      num = func_020138dc() & 0xff;
      break;
    }
    for(i = 0; i < 3; i++){
      q = num / data_02092808[i];
      if(q != 0 || seen != 0 || i == 2){
        func_02031b84(data_02092824[q]);
        seen = 1;
      }
      num = (num % data_02092808[i]) & 0xff;
    }
    break;
  case 1:
    func_02031028(-1);
    n2 = 0;
    if((int)data_0209fca0[0] > 0){
      unsigned char* pp = data_02092818;
      do {
        func_02031b84(*pp);
        n2++;
        pp++;
      } while(n2 < (int)data_0209fca0[0]);
    }
    break;
  }
}

/* arm9-data-run 0x02099068 data */
#pragma push
#pragma explicit_zero_data on
unsigned int data_02099068[36] = {
    0x41C700C0, 0x00000000, 0x41D500C0, 0x00000002, 0x41E300C0, 0x00000004, 0x41F100C0, 0x00000006,
    0x400000C0, 0x00000002, 0x400E00C0, 0x00000008, 0x401C00C0, 0x0000000A, 0x402900C0, 0x0000000C,
    0x41C400E0, 0x0000000E, 0x41D300E0, 0x00000002, 0x41E100E0, 0x00000004, 0x41EF00E0, 0x00000010,
    0x01FD80E0, 0x00000012, 0x400600E0, 0x0000000A, 0x401400E0, 0x00000002, 0x002280E0, 0x0000001F,
    0x002B80E0, 0x0000001F, 0x003480E0, 0xFFFF001F,
};
unsigned int data_020990f8[50] = {
    0x418500F8, 0x00000098, 0x418F00F8, 0x0000009A, 0x419900F8, 0x0000009C, 0x41A300F8, 0x00000098,
    0x41AD00F8, 0x0000009E, 0x41B700F8, 0x000000D8, 0x41C100F8, 0x000000DA, 0x41CB00F8, 0x000000DC,
    0x41D500F8, 0x000000DE, 0x41E300F8, 0x00000118, 0x41ED00F8, 0x000000DE, 0x41F700F8, 0x000000DA,
    0x400100F8, 0x0000011A, 0x400C00F8, 0x0000009E, 0x401600F8, 0x0000011C, 0x401D00F8, 0x000000DA,
    0x402700F8, 0x00000118, 0x403100F8, 0x000000D8, 0x403B00F8, 0x000000DA, 0x404500F8, 0x0000011A,
    0x405000F8, 0x00000098, 0x405A00F8, 0x0000009A, 0x006380F8, 0x0000001F, 0x006B80F8, 0x0000001F,
    0x007380F8, 0xFFFF001F,
};
#pragma pop
/* end arm9-data-run 0x02099068 */
