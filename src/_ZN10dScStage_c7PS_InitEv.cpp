//cpp
#include "Sound.h"
// @symbol _ZN10dScStage_c7PS_InitEv
#include "dScStage_c.h"
#include "G2x.h"

extern "C" {
// local extern: the typed u16 call inserts narrowing shifts absent from the ROM.
extern void _ZN3G2x18SetBlendBrightnessEPVtts(volatile u16 *reg, int targets, int amount);
extern u8 data_0209d454;
extern u8 data_0209d45c;
extern u8 data_0209f1ec;
extern u8 data_0209f210;
extern u8 data_0209f218;
extern u8 data_0209f22c;
extern u8 data_0209f230;
extern u8 data_0209f238;
extern u8 data_0209f23c;
extern u8 data_0209f240;
extern u8 data_0209f244;
extern u8 data_0209f248;
extern u8 data_0209f280;
extern u8 data_0209f29c;
extern u8 data_0209f2c8;
extern u8 data_0209f2cc;
extern u8 data_0209f2d8;
extern u8 data_0209f2e0;
extern u8 data_0209f2f0;
extern s8 data_0209f2f8;
extern u16 data_0209f300;
extern s32 data_0209fc68;

extern int SublevelToLevel(int i);
}

void dScStage_c::PS_Init()
{
    int isVsMode;
    u8 specialPauseState;
    u8 mainLayers;
    u8 subLayers;
    int mainBlendTargets;
    int subBlendTargets;

    subLayers = data_0209d454;
    if (subLayers & 4) {
        data_0209d454 = subLayers & ~4;
        subLayers = data_0209d454;
        *(volatile s32 *)0x04001000 = (*(volatile s32 *)0x04001000 & ~0x1f00) | (subLayers << 8);
    }

    specialPauseState = data_0209f218;
    mainLayers = data_0209d45c;
    isVsMode = 0;

    data_0209f248 = 0;
    data_0209f2e0 = 0;
    data_0209f2c8 = 0;
    data_0209f230 = 0;
    data_0209f2f0 = 0;
    data_0209f210 = 0;
    data_0209f22c = 0;
    data_0209f240 = 0;
    data_0209f238 = 0;
    data_0209f2cc = 0;
    data_0209f300 = 0xf;
    data_0209f23c = 0;
    data_0209f244 = 0;
    data_0209f29c = 0;
    data_0209f280 = 0;

    mainBlendTargets = mainLayers ^ 0x10;
    subBlendTargets = subLayers ^ 0x10;

    if (specialPauseState != 0) {
        data_0209f1ec = 7;
    } else {
        if (data_0209f2d8 == 1)
            isVsMode = 1;
        if (isVsMode != 0 && data_0209fc68 == 0) {
            data_0209f1ec = 4;
        } else {
            if (SublevelToLevel(data_0209f2f8) == 0x1d)
                data_0209f1ec = 0;
            else
                data_0209f1ec = 2;
        }
    }

    Sound::PauseMusic();
    _ZN3G2x18SetBlendBrightnessEPVtts((volatile u16 *)0x04000050, mainBlendTargets | 0x20, -7);
    _ZN3G2x18SetBlendBrightnessEPVtts((volatile u16 *)0x04001050, subBlendTargets | 0x20, -7);
}
