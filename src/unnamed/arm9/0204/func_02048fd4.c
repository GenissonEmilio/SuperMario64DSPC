#include "types.h"
// Copies pair i (i in 0..8) from table data_020821c0 into
// data_02099fa8 / data_02099fac.
#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
u32 data_020821c0[16] = {
    90, 550, 200, 0x5dc, 200, 750, 150, 400,
    40, 400, 90, 0x3e8, 50, 400, 200, 0x5dc
};
#pragma section forcerodata end
extern volatile u32 data_02099fa8;
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
