//cpp
#include "dScEntry_c.h"
#include "G2x.h"

void dScEntry_c::EnterStepFadeOut() {
    *(volatile u16 *)0x4000050 = 0;
    G2x::SetBlendBrightness((volatile u16 *)0x4001050, 0x1d, 0);
    mFadeBrightness = 0;
    mFadeTick = 0;
}
