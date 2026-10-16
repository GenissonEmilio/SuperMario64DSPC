#include "types.h"
extern u8 data_0209fc84;
extern u8 data_0209fca0;
extern u8 data_0209fc88;
extern u8 data_0209fcd8;
extern u8 data_02092818[];
extern u16 data_02075d14[];
extern u16 data_02075b14[];
extern u8 data_0208f074[];
extern u8 data_0208f174[];
extern void *func_0203d8a0(int idx);
inline int inline_fn(u16 arg0, u16 arg1)
{
  return arg0 != arg1;
}

void func_02031028(int arg)
{
  u16 *p;
  int i;
  int j;
  u8 *out;
  int n;
  u16 val;
  p = (u16 *) func_0203d8a0(data_0209fc84);
  i = 0;
  data_0209fca0 = ((u8 *) p)[1];
  n = data_0209fca0;
  if (n <= 0)
  {
    return;
  }
  out = data_02092818;
  do
  {
    val = (p + i)[1];
    j = 0;
    while ((inline_fn(data_02075b14[j], val) && inline_fn(data_02075d14[j], val)) && (j < 0x100))
    {
      j++;
    }

    if (j == 0x100)
    {
      *out = 0x47;
    }
    else
    {
      *out = j;
    }
    if (arg >= 0)
    {
      if (arg == 0)
      {
        data_0209fc88 += data_0208f074[*out];
      }
      else
      {
        data_0209fc88 += data_0208f174[*out];
      }
      data_0209fcd8 += 1;
    }
    i++;
    out++;
  }
  while (i < n);
}

/* arm9-data-run 0x02098C98 data */
#pragma push
#pragma explicit_zero_data on
unsigned int data_02098c98[34] = {
    0x418E00F8, 0x00000004, 0x419C00F8, 0x00000010, 0x41AA00F8, 0x00000010, 0x41B800F8, 0x0000000A,
    0x41C500F8, 0x0000000E, 0x41D300F8, 0x00000010, 0x41E100F8, 0x0000000A, 0x41F500F8, 0x00000098,
    0x400300F8, 0x00000016, 0x401300F8, 0x0000009A, 0x402100F8, 0x0000000A, 0x402E00F8, 0x0000009A,
    0x403C00F8, 0x00000006, 0x404A00F8, 0x00000014, 0x005980F8, 0x0000001F, 0x006280F8, 0x0000001F,
    0x006B80F8, 0xFFFF001F,
};
unsigned int data_02098d20[46] = {
    0x41B900C0, 0x00000000, 0x41C700C0, 0x00000002, 0x41D500C0, 0x00000004, 0x41E300C0, 0x00000006,
    0x41F100C0, 0x00000008, 0x400000C0, 0x0000000A, 0x400E00C0, 0x0000000C, 0x401E00C0, 0x0000000A,
    0x402B00C0, 0x0000000E, 0x403900C0, 0x00000010, 0x41AC00E0, 0x00000012, 0x41BA00E0, 0x0000000A,
    0x41C700E0, 0x00000014, 0x41DD00E0, 0x00000012, 0x41EA00E0, 0x00000016, 0x41FA00E0, 0x0000000E,
    0x400800E0, 0x0000000E, 0x401600E0, 0x0000000A, 0x402300E0, 0x0000000A, 0x403000E0, 0x00000014,
    0x003F80E0, 0x0000001F, 0x004880E0, 0x0000001F, 0x005180E0, 0xFFFF001F,
};
#pragma pop
/* end arm9-data-run 0x02098C98 */
