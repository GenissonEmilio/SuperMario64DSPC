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

/* bss 0x0209d3c4..0x0209d454 */
struct Region data_0209d3c4[12];

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
extern unsigned char data_0208f021[83] ;
#pragma pop
/* end arm9-data-run 0x0208F021 */
