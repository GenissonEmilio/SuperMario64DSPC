#include "types.h"
extern void func_0201473c(void *arg0, u32 fmtAddr, u32 val);

void nds_printf(void *arg0, u32 fmt, ...)
{
    u32 ap = (((u32)&fmt) & ~3u) + 4;
    func_0201473c(arg0, fmt, ap);
}

/* arm9-data-run 0x0208E6A4 data */
#pragma push
#pragma explicit_zero_data on
unsigned int _ZTS10dCcAcPos_c[6] = {
    0x43643031, 0x50634163, 0x635F736F, 0x00000000, 0x00000000, 0x0208E68C,
};
#pragma pop
/* end arm9-data-run 0x0208E6A4 */
