//cpp
// @symbol _ZN10ModelAnim24CopyERKS_Pcj
#include "ModelAnim2.h"

/* otherAnim.Copy(src) upcasts src to its dExtFrameCtrl_c BASE (+0x50): the
   second animation is seeded from the first one's state. */
void ModelAnim2::Copy(const ModelAnim2 &src, char *newFile, u32 newOtherFile)
{
    ModelAnim::Copy(src, newFile);
    otherAnim.Copy(src);
    if (newOtherFile)
        otherFile = newOtherFile;
    else
        otherFile = src.otherFile;
}

/* arm9-data-run 0x0208E77C data */
#pragma push
#pragma explicit_zero_data on
extern "C" {
unsigned int _ZTI19dExtBlendAnmModel_c[3] = {
    0x0209A764, 0x0208E8EC, 0x0208E924,
};
unsigned int _ZTI15dExtAnm2Model_c[3] = {
    0x0209A764, 0x0208E838, 0x0208E924,
};
}
#pragma pop
/* end arm9-data-run 0x0208E77C */
