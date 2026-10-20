//cpp
#include "dScEntry_c.h"

void dScEntry_c::SetSteps(const StepSet *steps) {
    mEnterStep = steps->enter;
    mBehaviorStep = steps->behavior;
    mRenderStep = steps->render;
    if (mEnterStep != 0)
        (this->*mEnterStep)();
}
