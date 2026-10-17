#include "types.h"

struct Widget
{
  int f_0;
  int f_4;
  int f_8;
  u16 f_c;
  u16 f_e;
  int f_10;
  char _14[0x30];
  u16 f_44;
  u16 f_46;
  u16 f_48;
  u16 f_4a;
  u16 f_4c;
  u8 f_4e;
  char _4f[1];
  int f_50;
  char _54[8];
  int *f_5c;
  u16 f_60;
  u16 f_62;
  char _64[0xc];
  u16 f_70;
};

struct dScene_c
{
  char _0[0x34];
  int f_34;
  char _38[0x64];
  int f_9c;
  char _a0[0x48];
  int f_e8;
  int f_ec;
  char _f0[4];
  int f_f4;
  int f_f8;
  char _fc[4];
  int f_100;
  int f_104;
  struct Widget *f_108[3];
};

struct Vec3
{
  int x;
  int y;
  int z;
};

extern struct dScene_c *data_ov007_0210342c;
extern void func_ov007_020b283c(void);
extern int func_ov007_020b2bd4(int a, int b);
extern int func_ov007_020beaa0(int a, int b);
extern void func_ov007_020b7708(int idx, struct Vec3 *pos);
extern struct Widget *func_ov007_020c44e4(int n);
extern void func_ov007_020c43bc(struct Widget *w, int r1);
extern void func_ov007_020c4388(struct Widget *w, int r1);

void func_ov007_020b2998(void)
{
  int i;
  struct Widget *w;
  struct Vec3 pos;

  func_ov007_020b283c();
  data_ov007_0210342c->f_f4 = func_ov007_020b2bd4(data_ov007_0210342c->f_ec,
      *((u8 *) ((((char *) data_ov007_0210342c) + data_ov007_0210342c->f_ec) + 0xfc)));
  data_ov007_0210342c->f_100 = func_ov007_020beaa0(0, data_ov007_0210342c->f_ec);
  data_ov007_0210342c->f_104 = func_ov007_020beaa0(1, data_ov007_0210342c->f_ec);
  pos.x = pos.y = pos.z = 0;
  func_ov007_020b7708(0, &pos);
  func_ov007_020b7708(1, &pos);
  data_ov007_0210342c->f_f8 = 0x1000;
  for (i = 0; i < 3; i++)
  {
    data_ov007_0210342c->f_108[i] = func_ov007_020c44e4(1);
    w = data_ov007_0210342c->f_108[i];
    w->f_4 = 0x80000;
    w->f_8 = 0x60000;
    w->f_c = w->f_e = 0x100;
    w->f_46 = w->f_4c = 0;
    w->f_48 = w->f_4a = 0;
    switch (i)
    {
    case 0:
      w->f_4e = 0x14;
      w->f_10 = -0x320ff;
      w->f_0 |= 2;
      break;
    case 1:
      w->f_4e = 0x15;
      w->f_10 = -0x32000;
      *w->f_5c = data_ov007_0210342c->f_9c;
      w->f_70 = 0x20;
      w->f_60 = 4;
      w->f_62 = 1;
      w->f_0 |= 2;
      break;
    case 2:
      w->f_4e = 0x16;
      w->f_10 = -0x31f01;
      w->f_44 = 0x7fff;
      w->f_50 = 0x1000;
      w->f_0 |= 1;
      break;
    }
    func_ov007_020c43bc(w, data_ov007_0210342c->f_34);
    func_ov007_020c4388(w, data_ov007_0210342c->f_34);
  }
  data_ov007_0210342c->f_e8 = 1;
}

/* .rodata 0x020cdb4c..0x020cfe94 */
extern const int data_ov007_020cdb4c[6] ;
extern const int data_ov007_020cdb64[6] ;
extern const int data_ov007_020cdb98[7] ;
extern const int data_ov007_020cdd3c[7] ;
extern const int data_ov007_020cdd74[7] ;
extern const int data_ov007_020cdc5c[7] ;
extern const int data_ov007_020cdcb0[7] ;
extern const int data_ov007_020cdbb4[7] ;
extern const int data_ov007_020cdc94[7] ;
extern const int data_ov007_020cdd20[7] ;
extern const int data_ov007_020cdde4[7] ;
extern const int data_ov007_020cddac[7] ;
extern const int data_ov007_020cdc78[7] ;
extern const int data_ov007_020cddc8[7] ;
extern const int data_ov007_020cdb7c[7] ;
extern const int data_ov007_020cdccc[7] ;
extern const int data_ov007_020cdbec[7] ;
extern const int data_ov007_020cde38[7] ;
extern const int data_ov007_020cdc40[7] ;
extern const int data_ov007_020cdc24[7] ;
extern const int data_ov007_020cde1c[7] ;
extern const int data_ov007_020cde00[7] ;
extern const int data_ov007_020cdd04[7] ;
extern const int data_ov007_020cdc08[7] ;
extern const int data_ov007_020cdce8[7] ;
extern const int data_ov007_020cdbd0[7] ;
extern const int data_ov007_020cdd90[7] ;
extern const int data_ov007_020cdd58[7] ;
extern const int data_ov007_020cde74[8] ;
extern const int data_ov007_020ce054[8] ;
extern const int data_ov007_020cde94[8] ;
extern const int data_ov007_020cdf54[8] ;
extern const int data_ov007_020cdff4[8] ;
extern const int data_ov007_020cdfd4[8] ;
extern const int data_ov007_020cdeb4[8] ;
extern const int data_ov007_020ce014[8] ;
extern const int data_ov007_020cded4[8] ;
extern const int data_ov007_020cdef4[8] ;
extern const int data_ov007_020cdf14[8] ;
extern const int data_ov007_020cdfb4[8] ;
extern const int data_ov007_020cde54[8] ;
extern const int data_ov007_020ce034[8] ;
extern const int data_ov007_020cdf34[8] ;
extern const int data_ov007_020cdf94[8] ;
extern const int data_ov007_020cdf74[8] ;
extern const int data_ov007_020ce1b8[9] ;
extern const int data_ov007_020ce074[9] ;
extern const int data_ov007_020ce194[9] ;
extern const int data_ov007_020ce0bc[9] ;
extern const int data_ov007_020ce0e0[9] ;
extern const int data_ov007_020ce104[9] ;
extern const int data_ov007_020ce098[9] ;
extern const int data_ov007_020ce128[9] ;
extern const int data_ov007_020ce14c[9] ;
extern const int data_ov007_020ce170[9] ;
extern const int data_ov007_020ce204[10] ;
extern const int data_ov007_020ce22c[10] ;
extern const int data_ov007_020ce254[10] ;
extern const int data_ov007_020ce27c[10] ;
extern const int data_ov007_020ce344[10] ;
extern const int data_ov007_020ce2a4[10] ;
extern const int data_ov007_020ce2cc[10] ;
extern const int data_ov007_020ce2f4[10] ;
extern const int data_ov007_020ce1dc[10] ;
extern const int data_ov007_020ce31c[10] ;
extern const int data_ov007_020ce36c[11] ;
extern const int data_ov007_020ce398[11] ;
extern const int data_ov007_020ce3c4[11] ;
extern const int data_ov007_020ce3f0[11] ;
extern const int data_ov007_020ce41c[11] ;
extern const int data_ov007_020ce448[11] ;
extern const int data_ov007_020ce564[12] ;
extern const int data_ov007_020ce474[12] ;
extern const int data_ov007_020ce4a4[12] ;
extern const int data_ov007_020ce4d4[12] ;
extern const int data_ov007_020ce504[12] ;
extern const int data_ov007_020ce534[12] ;
extern const int data_ov007_020ce594[13] ;
extern const int data_ov007_020ce5c8[13] ;
extern const int data_ov007_020ce5fc[13] ;
extern const int data_ov007_020ce630[13] ;
extern const int data_ov007_020ce664[13] ;
extern const int data_ov007_020ce698[13] ;
extern const int data_ov007_020ce81c[14] ;
extern const int data_ov007_020ce854[14] ;
extern const int data_ov007_020ce88c[14] ;
extern const int data_ov007_020ce8c4[14] ;
extern const int data_ov007_020ce6cc[14] ;
extern const int data_ov007_020ce704[14] ;
extern const int data_ov007_020ce73c[14] ;
extern const int data_ov007_020ce774[14] ;
extern const int data_ov007_020ce7ac[14] ;
extern const int data_ov007_020ce7e4[14] ;
extern const int data_ov007_020ce8fc[15] ;
extern const int data_ov007_020ce938[15] ;
extern const int data_ov007_020ce974[16] ;
extern const int data_ov007_020ce9b4[16] ;
extern const int data_ov007_020ce9f4[16] ;
extern const int data_ov007_020cea34[16] ;
extern const int data_ov007_020cea74[17] ;
extern const int data_ov007_020ceab8[17] ;
extern const int data_ov007_020ceafc[17] ;
extern const int data_ov007_020ceb40[18] ;
extern const int data_ov007_020ceb88[18] ;
extern const int data_ov007_020cebd0[19] ;
extern const int data_ov007_020cec1c[19] ;
extern const int data_ov007_020cec68[19] ;
extern const int data_ov007_020cecb4[19] ;
extern const int data_ov007_020ced00[20] ;
extern const int data_ov007_020ced50[20] ;
extern const int data_ov007_020ceda0[20] ;
extern const int data_ov007_020cedf0[20] ;
extern const int data_ov007_020cee40[20] ;
extern const int data_ov007_020cee90[20] ;
extern const int data_ov007_020ceee0[20] ;
extern const int data_ov007_020cef30[20] ;
extern const int data_ov007_020cef80[20] ;
extern const int data_ov007_020cf078[21] ;
extern const int data_ov007_020cf0cc[21] ;
extern const int data_ov007_020cefd0[21] ;
extern const int data_ov007_020cf024[21] ;
extern const int data_ov007_020cf120[22] ;
extern const int data_ov007_020cf178[22] ;
extern const int data_ov007_020cf1d0[22] ;
extern const int data_ov007_020cf228[23] ;
extern const int data_ov007_020cf284[24] ;
extern const int data_ov007_020cf2e4[24] ;
extern const int data_ov007_020cf344[25] ;
extern const int data_ov007_020cf3a8[25] ;
extern const int data_ov007_020cf40c[26] ;
extern const int data_ov007_020cf474[26] ;
extern const int data_ov007_020cf4dc[26] ;
extern const int data_ov007_020cf544[26] ;
extern const int data_ov007_020cf5ac[27] ;
extern const int data_ov007_020cf618[28] ;
extern const int data_ov007_020cf688[30] ;
extern const int data_ov007_020cf700[30] ;
extern const int data_ov007_020cf778[31] ;
extern const int data_ov007_020cf7f4[31] ;
extern const int data_ov007_020cf870[31] ;
extern const int data_ov007_020cf8ec[32] ;
extern const int data_ov007_020cf96c[32] ;
extern const int data_ov007_020cf9ec[33] ;
extern const int data_ov007_020cfa70[34] ;
extern const int data_ov007_020cfaf8[35] ;
extern const int data_ov007_020cfb84[37] ;
extern const int data_ov007_020cfc18[37] ;
extern const int data_ov007_020cfcac[38] ;
extern const int data_ov007_020cfd44[42] ;
extern const int data_ov007_020cfdec[42] ;
