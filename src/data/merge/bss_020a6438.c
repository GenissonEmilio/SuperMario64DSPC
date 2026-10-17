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
