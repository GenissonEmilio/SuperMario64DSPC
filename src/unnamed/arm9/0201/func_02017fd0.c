#include "types.h"
typedef struct {
    u32   unk0;
    void *ptr;      /* +4 */
    u32   start;    /* +8 */
    u32   size;     /* +c */
} CodeRegion;

extern void _ZN4CP1526InvalidateInstructionCacheEjj(u32 addr, u32 size);
extern void _ZN4CP1519InvalidateDataCacheEjj(u32 addr, u32 size);
extern void MultiStore_Int(u32 val, void *dst, u32 size);

void func_02017fd0(CodeRegion *rgn)
{
    u32   start;
    u32   siz;
    void *ptr;
    u32   len;
    volatile u32 fillVal;

    start = rgn->start;
    siz   = rgn->size;
    ptr   = rgn->ptr;
    len   = start + siz;

    _ZN4CP1526InvalidateInstructionCacheEjj((u32)ptr, len);
    _ZN4CP1519InvalidateDataCacheEjj((u32)ptr, len);

    fillVal = 0xe6000010;
    MultiStore_Int(fillVal, ptr, len);
}

/* arm9-data-run 0x0208EE24 data */
#pragma push
#pragma explicit_zero_data on
unsigned int _ZTSN8dGraph_c10callback_cE[6] = {
    0x4764384E, 0x68706172, 0x3031635F, 0x6C6C6163, 0x6B636162, 0x0045635F,
};
#pragma pop
/* end arm9-data-run 0x0208EE24 */
