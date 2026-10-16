//cpp
#include "types.h"
// @symbol _ZN10dScStage_c23LoadTextureTransformersEv
#include "dScStage_c.h"
#include "TextureTransformer.h"
struct LevelTextureAnimEntry {
    int unk_00;
    void *animationFile;
    char pad[4];
};
struct LevelTextureAnimInfo {
    char pad_00[0x10];
    struct LevelTextureAnimEntry *entries;
    unsigned char slotCount;
};
extern struct LevelTextureAnimInfo *data_0209f340;
extern "C" {
extern void *_Znwj(u32);
// local extern: retain the C1 call after the ROM's unsigned-int allocator.
extern void *_ZN18TextureTransformerC1Ev(void *);
extern void _ZN18TextureTransformer7SetFileER8BTA_Filei5Fix12IiEj(void *self, void *animationFile,
                                                                  int flags, int speed,
                                                                  u32 startFrame);
}

void dScStage_c::LoadTextureTransformers()
{
    struct LevelTextureAnimEntry *entry = data_0209f340->entries;
    StageTexAnimSlot *slot = mTexAnimSlots;
    BMD_File *modelFile = mModel.data.modelFile;
    int slotIndex;
    for (slotIndex = 0; slotIndex < (int)data_0209f340->slotCount; slotIndex++) {
        if (entry->animationFile) {
            TextureTransformer::Prepare(*modelFile, *(BTA_File *)entry->animationFile);
            // The ROM calls _Znwj; a C++ new expression selects _Znwm under this pin.
            void *transformer = _Znwj(0x14);
            if (transformer)
                transformer = _ZN18TextureTransformerC1Ev(transformer);
            slot->mTransformer = transformer;
            _ZN18TextureTransformer7SetFileER8BTA_Filei5Fix12IiEj(
                slot->mTransformer, entry->animationFile, 0, 0x1000, 0);
        }
        entry++;
        slot++;
    }
}
