//cpp
#include "types.h"
// @symbol _ZN10dScStage_c16CleanupResourcesEv
#include "dScStage_c.h"
#include "Sound.h"
#include "Message.h"
#include "Memory.h"
#include "SharedFilePtr.h"
#include "dBgW.h"
#include "TextureTransformer.h"
/* _ZN10dScStage_c16CleanupResourcesEv @ 0x0202c9a8 (arm9, size 0x264)
 * Releases the level file handles, tears down fader/mesh-collider/message
 * state and unloads the level overlays/archive. Returns 1.
 */
extern "C" {
extern void *data_020756f0[]; /* 12 SharedFilePtr* released on cleanup */
extern u8 data_0209f2d8;
extern int data_0209d4a8;
extern char *data_0209f340; /* -> struct, count byte at +0x14 */
extern int data_0209f320;
extern int data_0209f314;
extern void *data_0209f324;
extern int data_0209d4b0;
extern s8 data_0209f2f8;
extern int data_0209f394[];
extern int data_0209f318;
extern u8 data_0209f2c4;
extern u8 data_0209f2e0;
extern u8 data_0209f2d4;
extern u8 data_0209f244;
extern u8 data_0209f2b0;
extern u8 data_0209f20c;

extern void _ZN5Sound21ResetPlayerVoiceGroupEv(void);
extern void EndKuppaScript(void);
extern void func_02073244(void *, int, int, void (*)(void *));
extern void _ZN9dFdWipe_cD1Ev(void *);
extern void CleanCommonModelDataArr(void);
extern KCL_File *func_01ffb0c8(dBgW_Kc *self);
extern void Deallocate(void *ptr);
extern void _Z19UnloadLevelOverlaysi(int);
extern void UnloadArchive(int);
}

int dScStage_c::CleanupResources()
{
    u32 fileIndex;

    for (fileIndex = 0; fileIndex < 12; fileIndex++)
        ((SharedFilePtr *)(data_020756f0[fileIndex]))->Release();

    {
        int atEnd = (data_0209f2d8 == 2);
        if (!atEnd)
            _ZN5Sound21ResetPlayerVoiceGroupEv();
    }
    EndKuppaScript();
    data_0209d4a8 = 0;

    {
        Model *skybox = mSkyboxModel;
        if (skybox)
            delete skybox;
    }

    {
        StageTexAnimSlot *slot = mTexAnimSlots;
        int slotIndex;
        for (slotIndex = 0; slotIndex < *(u8 *)(data_0209f340 + 0x14); slotIndex++, slot++) {
            TextureTransformer *transformer = (TextureTransformer *)slot->mTransformer;
            if (transformer)
                delete transformer;
            {
                char *block = (char *)slot->mBlockList;
                while (block) {
                    char *next = *(char **)(block + 0xc);
                    Memory::operator_delete2(block);
                    block = next;
                }
            }
        }
    }

    data_0209f320 = 0;
    data_0209f314 = 0;
    dScene_c::SetAndStopColorFader();
    data_0209d4b0 = 0;
    func_02073244(data_0209f324, 0x60, 8, _ZN9dFdWipe_cD1Ev);
    data_0209f324 = 0;
    CleanCommonModelDataArr();
    mMeshCollider.Disable();
    dScStage_c::ResetMeshColliders();
    Deallocate(func_01ffb0c8(&mMeshCollider));
    _Z19UnloadLevelOverlaysi(data_0209f2f8);
    if (data_0209f2f8 == 1)
        UnloadArchive(7);

    {
        int playerIndex;
        for (playerIndex = 0; playerIndex < 4; playerIndex++)
            data_0209f394[playerIndex] = 0;
    }
    data_0209f318 = 0;
    data_0209f2c4 = 0;
    Message::ResetAllGlobals();

    {
        u8 mode = data_0209f2d8;
        int resetSequenceCounts = 0;
        data_0209f2e0 = 0;
        data_0209f2d4 = 0;
        data_0209f244 = 0;
        data_0209f2b0 = 0;
        data_0209f20c = 0;
        if (mode == 1)
            resetSequenceCounts = 1;
        if (resetSequenceCounts) {
            Sound::Player::SetPlayableSeqCount(2, 2);
            Sound::Player::SetPlayableSeqCount(3, 1);
        }
    }
    return 1;
}
