//cpp
#include "dScStage_c.h"
extern "C" {
extern char data_0209f340[];
extern int data_0209f320;
}
void dScStage_c::LoadModel()
{
    mModel.LoadAndSetFile(*(unsigned short *)(*(char **)data_0209f340 + 8), 1, -1);
    BMD_File *modelFile;
    unsigned int materialCount;
    BMD_Material *material;
    unsigned int materialIndex;
    ModelComponents *components;

    components = &mModel.data;
    modelFile = components->modelFile;
    material = components->materials;
    materialCount = modelFile->numMaterials;
    materialIndex = 0;
    while (materialIndex < materialCount) {
        unsigned int flags = material->flags;
        materialIndex++;
        if ((flags & 0x1f0000) != 0x1f0000) {
            material->flags = (flags & ~0x3f000000) | 0x13000000;
        }
        material++;
    }
    data_0209f320 = (int)components;
}
