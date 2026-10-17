//cpp
/* leftovers:
 * #pragma defer_codegen off stays. It emits .text in source order, which is
 * the ROM order 0x02019584..0x02019664. func_0201964c stays a free function;
 * Timer::Timer() would rename the symbol. func_02059650 is the tick read
 * (timer 0 at 0x4000100 plus the counter at data_020a6438). Its declaration
 * is only in decl_common.h.
 */
/* Timer: arm9 stopwatch. mTime is the start tick while running and the
 * frozen elapsed count while stopped.
 */
#include "Timer.h"
#include "decl_common.h"

#pragma defer_codegen off

// @symbol _ZN5Timer7GetTimeEv
s64 Timer::GetTime()
{
    if (!mIsRunning)
        return mTime;
    return func_02059650() - mTime;
}

// @symbol _ZN5Timer9StopTimerEv
void Timer::StopTimer()
{
    if (!mIsRunning)
        return;
    mIsRunning = 0;
    mTime = func_02059650() - mTime;
}

// @symbol _ZN5Timer10StartTimerEv
void Timer::StartTimer()
{
    mIsRunning = 1;
    mTime = func_02059650() - mTime;
}

// @symbol _ZN5Timer10ResetTimerEv
void Timer::ResetTimer()
{
    mIsRunning = 0;
    mTime = 0;
}

/* The C1 constructor (ResetTimer, then return this) stays an extern "C"
   helper under its address name; the Timer::Timer() spelling would rename
   the symbol. */
// @symbol func_0201964c
extern "C" Timer *func_0201964c(Timer *__this)
{
    __this->ResetTimer();
    return __this;
}

/* arm9-data-run 0x0208F304 data */
#pragma push
#pragma explicit_zero_data on
extern "C" {
unsigned char _ZTIN5dPa_c7level_c10callback_cE[8] = {
    0x74, 0xA7, 0x09, 0x02, 0x6C, 0xF4, 0x08, 0x02,
};
unsigned char _ZTIN5dPa_c7level_c26checkWaterRippleCallback_cE[12] = {
    0x64, 0xA7, 0x09, 0x02, 0x38, 0xF6, 0x08, 0x02, 0x04, 0xF3, 0x08, 0x02,
};
unsigned char _ZTIN5dPa_c7level_c20checkYoganCallback_cE[12] = {
    0x64, 0xA7, 0x09, 0x02, 0xB8, 0xF5, 0x08, 0x02, 0x60, 0xF3, 0x08, 0x02,
};
unsigned char _ZTIN5dPa_c7level_c20checkWaterCallback_cE[12] = {
    0x64, 0xA7, 0x09, 0x02, 0x68, 0xF5, 0x08, 0x02, 0x04, 0xF3, 0x08, 0x02,
};
unsigned char _ZTIN5dPa_c7level_c16bubbleCallback_cE[12] = {
    0x64, 0xA7, 0x09, 0x02, 0xD4, 0xF4, 0x08, 0x02, 0x60, 0xF3, 0x08, 0x02,
};
unsigned char _ZTIN5dPa_c7level_c20edStarKiraCallback_cE[12] = {
    0x64, 0xA7, 0x09, 0x02, 0x90, 0xF5, 0x08, 0x02, 0x60, 0xF3, 0x08, 0x02,
};
unsigned char _ZTIN5dPa_c7level_c16splashCallback_cE[12] = {
    0x64, 0xA7, 0x09, 0x02, 0xF8, 0xF4, 0x08, 0x02, 0x60, 0xF3, 0x08, 0x02,
};
unsigned char _ZTIN5dPa_c7level_c15scaleCallback_cE[12] = {
    0x64, 0xA7, 0x09, 0x02, 0xB0, 0xF4, 0x08, 0x02, 0x60, 0xF3, 0x08, 0x02,
};
unsigned char _ZTIN5dPa_c7level_c16simpleCallback_cE[12] = {
    0x64, 0xA7, 0x09, 0x02, 0x1C, 0xF5, 0x08, 0x02, 0x04, 0xF3, 0x08, 0x02,
};
unsigned char _ZTIN5dPa_c7level_c14clipCallback_cE[12] = {
    0x64, 0xA7, 0x09, 0x02, 0x8C, 0xF4, 0x08, 0x02, 0x04, 0xF3, 0x08, 0x02,
};
unsigned char _ZTIN5dPa_c7level_c24fitWaterSimpleCallback_cE[12] = {
    0x64, 0xA7, 0x09, 0x02, 0x0C, 0xF6, 0x08, 0x02, 0x60, 0xF3, 0x08, 0x02,
};
unsigned char _ZTIN5dPa_c7level_c23cleanParticleCallback_cE[12] = {
    0x64, 0xA7, 0x09, 0x02, 0xE0, 0xF5, 0x08, 0x02, 0x04, 0xF3, 0x08, 0x02,
};
unsigned char _ZTIN5dPa_c7level_c18fitWaterCallback_cE[20] = {
    0x64, 0xA7, 0x09, 0x02, 0x40, 0xF5, 0x08, 0x02, 0x04, 0xF3, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00,
    0x30, 0xF3, 0x08, 0x02,
};
}
#pragma pop
/* end arm9-data-run 0x0208F304 */
