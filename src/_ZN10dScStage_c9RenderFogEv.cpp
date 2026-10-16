//cpp
// @symbol _ZN10dScStage_c9RenderFogEv
#include "dScStage_c.h"
#include "dCamera_c.h"
#include "G3X.h"
extern "C" {
// local extern: the bool header call adds normalization absent from the ROM.
void _ZN3G3X6SetFogEbiii(int enabled, int mode, int shift, int offset);
extern signed char data_0209f2f8;
extern int data_0209f318[];
void *func_ov002_020f1c20(void);
}

void dScStage_c::RenderFog()
{
    Fog *fog = 0;
    if (data_0209f2f8 == 5)
        fog = (Fog *)func_ov002_020f1c20();
    if (fog == 0) {
        dCamera_c *camera = *(dCamera_c **)data_0209f318;
        fog = mFog;
        if (camera->IsUnderwater())
            fog++;
    }
    _ZN3G3X6SetFogEbiii(fog->mEnabled, 0, fog->mShift, fog->mOffset);
    *(volatile unsigned int *)0x4000358 = fog->mColor | 0x1f0000;
    G3X::SetFogTable(fog);
}
