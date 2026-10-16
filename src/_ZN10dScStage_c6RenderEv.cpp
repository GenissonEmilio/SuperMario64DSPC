//cpp
#include "types.h"
#include "dScStage_c.h"
#include "dExtFrameCtrl_c.h"
#include "dExtShadowModel_c.h"
#include "dCc_c.h"
#include "OAM.h"
#include "dCamera_c.h"
struct LevelRenderInfo {
    u8 pad[0x14];
    u8 slotCount;
};

extern "C" {
void func_020391f0(void);
void func_0203083c(void);
void func_ov001_020aaf40(void);
void func_0203db3c(int i, int v);
int SublevelToLevel(int i);

extern u8 data_0209f2c4;
extern u8 data_0209f20c;
extern u8 data_0209f294;
extern u8 data_0209f2d8;
extern u8 data_0209fc9c;
extern u8 data_0209f290;
extern u8 data_0209f21c;
extern u8 data_0209f2d4;
extern u8 data_0209f2b0;
extern u8 data_0209f260;
extern signed char data_02092124;
extern char *data_0209f340;
extern char *data_0209f318;
extern char *data_0209f394[];
extern OamAttr _ZN3OAM4COINE;
extern OamAttr _ZN3OAM5TIMESE;
}

int dScStage_c::Render()
{
    if (((data_0209f294 | (data_0209f2c4 | data_0209f20c)) & 0xff) == 0) {
        StageTexAnimSlot *slot = mTexAnimSlots;
        int slotIndex;
        for (slotIndex = 0; slotIndex < ((LevelRenderInfo *)data_0209f340)->slotCount;
             slotIndex++, slot++) {
            if (slot->mActive != 0 && slot->mTransformer != 0)
                ((dExtFrameCtrl_c *)slot->mTransformer)->Advance();
        }
        mSysTracker.Update();
    }
    func_020391f0();
    RenderFog();
    {
        Model *skybox = mSkyboxModel;
        if (skybox != 0) {
            Matrix4x3 *transform = &skybox->mat4x3;
            Vector3 *cameraPosition = &((dCamera_c *)data_0209f318)->pos;
            transform->t.x = cameraPosition->x >> 3;
            transform->t.y = cameraPosition->y >> 3;
            transform->t.z = cameraPosition->z >> 3;
            mSkyboxModel->Render(0);
        }
    }
    RenderModel();
    dExtShadowModel_c::RenderAll();
    RenderModelTransparent();
    {
        int isVsMode = (data_0209f2d8 == 1);
        if (isVsMode) {
            if (data_0209fc9c == 0 && data_0209f2c4 == 0) {
                RenderVsModeCountdown();
                RenderVsModeNewStar();
                if (data_0209f294 != 0 && data_0209f290 != 2)
                    RenderBouncingArrows();
            }
            func_0203083c();
        }
    }
    dCc_c::Process();
    func_ov001_020aaf40();
    {
        int positionXor = 0;
        int playerFlagBits = 0;
        int playerIndex = 0;
        int playerCount = data_0209f21c;
        for (; playerIndex < playerCount; playerIndex++) {
            char *player = data_0209f394[playerIndex];
            if (player != 0) {
                u8 playerFlags = *(u8 *)(player + 0x6ff);
                int *position = (int *)((long long)(int)(player + 0x5c));
                positionXor ^= (u8)(position[2] ^ (position[0] ^ position[1]));
                playerFlagBits |= (u8)((playerFlags & 1) << playerIndex);
            }
        }
        func_0203db3c(0x10, positionXor);
        func_0203db3c(0x10, playerFlagBits);
    }
    if (data_0209f2c4 != 0) {
        PS_Render();
    } else if (data_0209f20c != 0 && data_0209f2d4 != 0) {
        int coinCounterY = (SublevelToLevel(data_02092124) < 0xf) ? 0x80 : 0x70;
        if (data_0209f2b0 != 0)
            coinCounterY += 0x10;
        OAM::Render(0, &_ZN3OAM4COINE, 0x68, coinCounterY, -1, -1, 0);
        OAM::Render(0, &_ZN3OAM5TIMESE, 0x78, coinCounterY + 8, -1, -1, 0);
        RenderNumber(data_0209f260, 0x80, coinCounterY, 1, 8);
    }
    LC_Render();
    return 1;
}
