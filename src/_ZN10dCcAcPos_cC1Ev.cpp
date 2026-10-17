//cpp
// @symbol _ZN10dCcAcPos_cC1Ev
/* recovered: real C++ complete-object constructor
 *
 * The ROM's two steps are the dCcAc_c base step (_ZN7dCcAc_cC2Ev) and the
 * _ZTV10dCcAcPos_c vptr store -- pos is left uninitialised, so the body is
 * empty and the compiler emits the whole function from the class
 * declaration alone.
 */
#include "dCcAcPos_c.h"

dCcAcPos_c::dCcAcPos_c()
{
}

/* arm9-data-run 0x0208E74C data */
#pragma push
#pragma explicit_zero_data on
extern "C" {
unsigned int _ZTI15dExtAnmTexPat_c[3] = {
    0x0209A764, 0x0208E824, 0x0208E744,
};
unsigned int _ZTI15dExtAnmTexSRT_c[3] = {
    0x0209A764, 0x0208E810, 0x0208E744,
};
unsigned int _ZTI17dExtAnmMaterial_c[3] = {
    0x0209A764, 0x0208E8D8, 0x0208E744,
};
}
#pragma pop
/* end arm9-data-run 0x0208E74C */
