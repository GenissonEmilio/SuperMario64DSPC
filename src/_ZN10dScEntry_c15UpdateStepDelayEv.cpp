//cpp
#include "dScEntry_c.h"
extern "C" s32 data_0208ee44;

void dScEntry_c::UpdateStepDelay() {
    mStepDelay -= data_0208ee44;
    if (mStepDelay > 0)
        return;
    SetSteps(mPendingSteps);
}
