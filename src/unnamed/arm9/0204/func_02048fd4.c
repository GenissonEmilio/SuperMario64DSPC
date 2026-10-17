typedef struct {
    void *obj;
    int dist;
} SoundSlot;
SoundSlot data_020a4c18[6];
#include "types.h"
// Copies pair i (i in 0..8) from table data_020821c0 into
// data_02099fa8 / data_02099fac.

/* data 0x02099fa8..0x02099fac */
#pragma explicit_zero_data on
int data_02099fa8 = 90;
#pragma explicit_zero_data off
extern u32 data_020821c0[16] ;
#pragma section forcerodata end
extern volatile u32 data_02099fac;

void func_02048fd4(int i)
{
    volatile u32 *tbl;
    int j;
    if (i < 0) return;
    if (i > 8) return;
    tbl = data_020821c0;
    j = i * 2;
    data_02099fa8 = tbl[j];
    j++;
    data_02099fac = tbl[j];
}
