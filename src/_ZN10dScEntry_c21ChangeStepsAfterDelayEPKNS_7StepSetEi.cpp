//cpp
#include "dScEntry_c.h"
extern dScEntry_c::StepSet data_ov075_0211d840;

void dScEntry_c::ChangeStepsAfterDelay(const StepSet *steps, s32 delay) {
    mPendingSteps = steps;
    mStepDelay = delay;
    Step render = mRenderStep;
    SetSteps(&data_ov075_0211d840);
    mRenderStep = render;
}
