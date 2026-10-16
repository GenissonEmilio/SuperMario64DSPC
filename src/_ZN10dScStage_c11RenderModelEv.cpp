//cpp
#include "types.h"
// @symbol _ZN10dScStage_c11RenderModelEv
#include "decl_common.h"
#include "dScStage_c.h"
#include "TextureTransformer.h"
struct LevelRenderInfo {
    char pad[0x14];
    u8 slotCount;
};

extern char *data_0209f340;

void dScStage_c::RenderModel()
{
    // The material count at bone +0x30 is still opaque in BMD_Bone.
    ModelComponents *components = &mModel.data;
    BMD_Bone *bone = components->modelFile->bones;
    StageTexAnimSlot *slot = mTexAnimSlots;
    int slotIndex;

    for (slotIndex = 0; slotIndex < ((LevelRenderInfo *)data_0209f340)->slotCount; slotIndex++) {
        u8 active = slot->mActive;
        u8 *materialIds = bone->materialIds;

        if (active != 0) {
            u16 materialIndex;
            for (materialIndex = 0; materialIndex < *(u16 *)((char *)bone + 0x30);
                 materialIndex++) {
                u8 materialId = *materialIds;
                BMD_Material *material = &components->materials[materialId];
                materialIds++;
                u32 flagsTest = *(volatile u32 *)&material->flags;
                if ((flagsTest & 0x1f0000) == 0x1f0000) {
                    u32 *flags = &material->flags;
                    *flags &= ~0x80000000;
                } else {
                    u32 *flags = &material->flags;
                    *flags |= 0x80000000;
                }
            }
            if (slot->mTransformer != 0)
                ((TextureTransformer *)slot->mTransformer)->Update(mModel.data);
        } else {
            u16 materialIndex;
            for (materialIndex = 0; materialIndex < *(u16 *)((char *)bone + 0x30);
                 materialIndex++) {
                u8 materialId = *materialIds;
                BMD_Material *material = &components->materials[materialId];
                material->flags |= 0x80000000;
                materialIds++;
            }
        }

        slot++;
        bone++;
    }

    Model *model = &mModel;
    model->Render((const Vector3 *)&data_020755d4);
}
