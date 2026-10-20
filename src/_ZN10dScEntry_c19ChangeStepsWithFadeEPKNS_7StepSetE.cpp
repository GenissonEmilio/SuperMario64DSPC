//cpp
#include "dScEntry_c.h"

void dScEntry_c::ChangeStepsWithFade(const StepSet *steps) {
    mPendingSteps = steps;
    Step render = mRenderStep;
    SetSteps(&EntryFadeOutSteps);
    mRenderStep = render;
}
