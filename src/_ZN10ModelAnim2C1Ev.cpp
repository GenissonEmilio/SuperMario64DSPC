//cpp
// @symbol _ZN10ModelAnim2C1Ev
/* recovered: real C++ constructor. The ROM's steps: base step
 * _ZN9ModelAnimC2Ev (the base-subobject variant -- ModelAnim2 is always a
 * base when this runs), both vptr stores (_ZTV10ModelAnim2 primary,
 * VTable_Animation_ModelAnim2Thunk secondary at +0x50, addend 0x2c raw),
 * the scalar store otherFile = 0, then the MEMBER construction
 * _ZN15dExtFrameCtrl_cC1Ev at +0x68. That order -- scalar store before a class
 * member's ctor -- is mem-initialisation running in DECLARATION order
 * (otherFile is declared before otherAnim), so the init list below
 * reproduces it; spelling `otherFile = 0;` in the body would emit after
 * otherAnim's construction and miss by one call. */
#include "ModelAnim2.h"

ModelAnim2::ModelAnim2() : otherFile(0) {}

/* arm9-data-run 0x0208E87C data */
#pragma push
#pragma explicit_zero_data on
extern "C" {
unsigned int _ZTV9ModelBase[3] = {
    0x02017120, 0x020170E8, 0x00000000,
};
}
#pragma pop
/* end arm9-data-run 0x0208E87C */
