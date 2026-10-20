//cpp
#include "dScEntry_c.h"

void dScEntry_c::ChangeStepsAfterDelay(const StepSet *steps, s32 delay) {
    mPendingSteps = steps;
    mStepDelay = delay;
    Step render = mRenderStep;
    SetSteps(&EntryDelaySteps);
    mRenderStep = render;
}
