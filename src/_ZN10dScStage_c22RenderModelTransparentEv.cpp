//cpp
#include "types.h"
// @symbol _ZN10dScStage_c22RenderModelTransparentEv
#include "decl_common.h"
#include "dScStage_c.h"
extern "C" {
extern char *data_0209f340;
}

void dScStage_c::RenderModelTransparent()
{
    // The material count at bone +0x30 is still opaque in BMD_Bone.
    ModelComponents *components = &mModel.data;
    BMD_Bone *bone = components->modelFile->bones;
    StageTexAnimSlot *slot = mTexAnimSlots;
    int slotIndex;
    for (slotIndex = 0; slotIndex < *(u8 *)(data_0209f340 + 0x14); slotIndex++, slot++, bone++) {
        if (slot->mActive != 0) {
            u8 *materialIds = bone->materialIds;
            u16 materialIndex;
            for (materialIndex = 0; materialIndex < *(u16 *)((char *)bone + 0x30);
                 materialIndex++) {
                BMD_Material *material = &components->materials[*materialIds];
                if ((material->flags & 0x1f0000) != 0x1f0000)
                    material->flags &= ~0x80000000;
                else
                    material->flags |= 0x80000000;
                materialIds++;
            }
        }
    }
    Model *model = &mModel;
    model->Render((const Vector3 *)&data_020755d4);
}
