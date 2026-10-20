//cpp
#include "dScEntry_c.h"
extern dScEntry_c::StepSet data_ov075_0211d858;

void dScEntry_c::ChangeStepsWithFade(const StepSet *steps) {
    mPendingSteps = steps;
    Step render = mRenderStep;
    SetSteps(&data_ov075_0211d858);
    mRenderStep = render;
}
