//cpp
#include "dScEntry_c.h"
extern "C" void func_020551f0(void *, int);

void dScEntry_c::UpdateStepFadeOut() {
    ++mFadeTick;
    if (mFadeTick & 1)
        return;
    ++mFadeBrightness;
    func_020551f0((void *)0x4001050, mFadeBrightness);
    if (mFadeBrightness < 16)
        return;
    mIsFading = 1;
    SetSteps(mPendingSteps);
}
