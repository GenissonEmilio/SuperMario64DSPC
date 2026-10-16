//cpp
// @symbol _ZN10dScStage_c7LoadFogEv
#include "decl_common.h"
#include "dScStage_c.h"
/* dScStage_c::LoadFog. Initializes the normal and underwater density ramps,
   disabling normal fog by default. Level records override these defaults
   through Fog::Init when present. */
extern "C" {
extern void _ZN3Fog4InitEt5Fix12IiES1_(Fog *self, unsigned short color, int nearv, int farv);
}

void dScStage_c::LoadFog()
{
    unsigned char normalDensity = 0;
    unsigned char underwaterDensity = 0x28;
    int densityIndex;
    for (densityIndex = 0; densityIndex < 0x20; densityIndex++) {
        mFog[0].mDensity[densityIndex] = normalDensity;
        mFog[1].mDensity[densityIndex] = underwaterDensity;
        normalDensity += 4;
        underwaterDensity += 2;
    }
    mFog[0].mEnabled = 0;
    mFog[1].mEnabled = 1;
    mFog[1].mShift = 6;
    mFog[1].mOffset = 0;
    mFog[1].mColor = 0x6000;
    if (data_0209f258 == 0) {
        return;
    }
    {
        unsigned char *fogRecord = (unsigned char *)data_0209f31c;
        Fog *fog = mFog;
        int fogIndex;
        for (fogIndex = 0; fogIndex < data_0209f258; fogIndex++) {
            if (fogRecord[0] != 1) {
                fog->mEnabled = 0;
            } else {
                unsigned short color = ((fogRecord[1] >> 3) | ((fogRecord[2] >> 3) << 5)) |
                                       ((fogRecord[3] >> 3) << 10);
                _ZN3Fog4InitEt5Fix12IiES1_(fog, color, *((unsigned short *)(fogRecord + 4)),
                                           *((unsigned short *)(fogRecord + 6)));
            }
            fogRecord += 8;
            fog++;
        }
    }
}
