#include "types.h"
void func_02018c00(void *dst, int a, int id);
int func_0203d7b8(void);
struct Pair;
void func_0205e088(struct Pair *dst, char *src);
void Crash(void);
void FS_LoadOverlay(int a, int id);
struct Region
{
  u32 valid;
  u32 start;
  u32 size;
};
extern struct Region data_0209d3c4[12];
struct Pair
{
  int a;
  int b;
};
void LoadOverlay(int id)
{
  u32 start;
  struct Region *slot;
  u32 i;
  u32 total;
  struct Pair pair;
  char buf[0x24];
  struct Region *r;
  u32 end;
  func_02018c00(buf, 0, id);
  if (func_0203d7b8() != 0)
  {
    return;
  }
  func_0205e088(&pair, buf);
  slot = 0;
  total = (*((u32 *) (buf + 8))) + (*((u32 *) (buf + 0xc)));
  start = *((u32 *) (buf + 4));
  end = start + total;
  for (r = data_0209d3c4, i = 0; i < 12; r++, i++)
  {
    if (r->valid == 0xffffffff)
    {
      if (slot == 0)
      {
        slot = r;
      }
    }
    else
      if (((r->start + r->size) > start) && (end > r->start))
    {
      Crash();
    }
  }

  if (slot != 0)
  {
    slot->valid = id;
    slot->start = start;
    slot->size = total;
  }
  FS_LoadOverlay(0, id);
  func_0203d7b8();
}

/* arm9-data-run 0x0208F021 data */
#pragma push
#pragma explicit_zero_data on
unsigned char data_0208f021[83] = {
    0x0C, 0x64, 0x01, 0xB2, 0x0C, 0x67, 0x01, 0xE4, 0x0C, 0x68, 0x01, 0x16, 0x0D, 0x69, 0x01, 0x48,
    0x0D, 0x6A, 0x01, 0x7A, 0x0D, 0x6B, 0x01, 0xAC, 0x0D, 0x6C, 0x01, 0xDE, 0x0D, 0x6D, 0x01, 0x10,
    0x0E, 0x6E, 0x01, 0x42, 0x0E, 0x6F, 0x01, 0x74, 0x0E, 0x70, 0x01, 0xA6, 0x0E, 0x71, 0x01, 0xD8,
    0x0E, 0x75, 0x01, 0x0A, 0x0F, 0x83, 0x01, 0x1E, 0x0F, 0x8D, 0x01, 0x88, 0x13, 0x96, 0x01, 0xB0,
    0x13, 0xB3, 0x01, 0xEC, 0x13, 0xB4, 0x01, 0x70, 0x17, 0x24, 0x02, 0x58, 0x1B, 0x4E, 0x02, 0x40,
    0x1F, 0x76, 0x02,
};
#pragma pop
/* end arm9-data-run 0x0208F021 */
