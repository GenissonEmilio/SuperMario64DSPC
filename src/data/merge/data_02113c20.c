s32 daSBird_c::InitResources()
{
    BMD_File *modelFile = (BMD_File *)Model::LoadFile(data_ov009_02113c20);
unsigned char data_ov014_02113c20[8] = {
    5, 0, 2, 0, 255, 255, 34, 0
};
unsigned char data_ov015_02113c20[8] = {
    37, 2, 197, 7, 172, 13, 235, 242
};
unsigned char data_ov016_02113c20[8] = {
    76, 4, 6, 255, 255, 0, 86, 213
};
unsigned int data_ov020_02113c20[2] = {
    517, (unsigned int)&data_ov020_0211385c
};
unsigned char data_ov021_02113c20[8] = {
    0, 0, 0, 96, 0, 0, 0, 0
};
unsigned char data_ov022_02113c20[8] = {
    0, 0, 86, 245, 0, 0, 4, 2
};
unsigned int data_ov026_02113c20[1] = {
    (unsigned int)&_ZN10dBgActor_c4KillEv
};
unsigned char data_ov029_02113c20[8] = {
    0, 0, 0, 0, 0, 0, 0, 0
};
unsigned char data_ov036_02113c20[8] = {
    0, 0, 0, 0, 0, 64, 31, 0
};
unsigned int _ZTI18daObjWlSubmarine_c[1] = {
    (unsigned int)&_ZTVN3abi20__si_class_type_infoE
};
unsigned char data_ov014_02113c28[32] = {
    59, 1, 218, 22, 108, 7, 84, 242, 6, 0, 2, 0,
    255, 255, 35, 0, 60, 1, 6, 24, 184, 11, 8, 238,
    0, 0, 0, 64, 227, 3, 192, 255
};
unsigned char data_ov015_02113c28[32] = {
    37, 2, 96, 7, 172, 13, 235, 242, 37, 2, 251, 6,
    172, 13, 235, 242, 37, 2, 197, 7, 172, 13, 80, 243,
    37, 2, 197, 7, 172, 13, 181, 243
};
unsigned char data_ov016_02113c28[4] = {
    0, 0, 38, 11
};
unsigned int data_ov020_02113c28[8] = {
    544, (unsigned int)&data_ov020_02113a18, 576, (unsigned int)&data_ov020_02113a38, 608, (unsigned int)&data_ov020_02113a58, 640, (unsigned int)&data_ov020_02113a78
};
unsigned char data_ov021_02113c28[32] = {
    0, 0, 224, 227, 62, 8, 32, 28, 0, 0, 0, 96,
    0, 0, 0, 0, 0, 0, 168, 228, 62, 8, 182, 28,
    0, 0, 0, 96, 0, 0, 0, 0
};
unsigned char data_ov022_02113c28[32] = {
    254, 0, 168, 22, 44, 1, 164, 6, 0, 0, 0, 224,
    0, 0, 4, 18, 28, 1, 20, 5, 150, 0, 162, 23,
    0, 0, 0, 0, 0, 0, 255, 255
};
unsigned int data_ov026_02113c28[2] = {
    (unsigned int)&_ZTS18daObjWlSubmarine_c, (unsigned int)&_ZTI10dBgActor_c
};
unsigned int data_ov029_02113c28[1] = {
    (unsigned int)&_ZTI14daObjWcObj01_c
};
unsigned int data_ov036_02113c28[4] = {
    0x1f40000, 0x1f40000, 0, (unsigned int)&_ZTI14daObjRc_Hane_c
};
unsigned int _ZTV14daObjWcObj01_c[7] = {
    (unsigned int)&_ZN14daObjWcObj01_c13InitResourcesEv, (unsigned int)&_ZN8dActor_c19BeforeInitResourcesEv, (unsigned int)&_ZN8dActor_c18AfterInitResourcesEj, (unsigned int)&data_ov000_020b5be0, (unsigned int)&_ZN8dActor_c22BeforeCleanupResourcesEv, (unsigned int)&_ZN8dActor_c21AfterCleanupResourcesEj, (unsigned int)&data_ov000_020b5c4c
};
unsigned int _ZTV14daObjRc_Hane_c[4] = {
    (unsigned int)&_ZN14daObjRc_Hane_c13InitResourcesEv, (unsigned int)&_ZN8dActor_c19BeforeInitResourcesEv, (unsigned int)&_ZN8dActor_c18AfterInitResourcesEj, (unsigned int)&_ZN14daObjRc_Hane_c16CleanupResourcesEv
};
unsigned char data_ov014_02113c48[132] = {
    20, 0, 132, 234, 150, 0, 168, 22, 1, 0, 0, 0,
    0, 0, 34, 11, 50, 0, 83, 5, 33, 11, 229, 246,
    0, 0, 52, 243, 0, 0, 1, 0, 21, 0, 163, 15,
    237, 2, 55, 24, 0, 0, 0, 192, 0, 0, 0, 0,
    20, 0, 194, 232, 0, 0, 100, 25, 255, 0, 0, 192,
    0, 0, 210, 7, 15, 0, 176, 16, 6, 13, 164, 230,
    0, 0, 0, 0, 0, 0, 240, 240, 56, 0, 184, 11,
    96, 16, 8, 238, 0, 0, 46, 152, 0, 0, 4, 255,
    23, 0, 181, 244, 238, 2, 250, 0, 0, 0, 0, 32,
    0, 0, 255, 255, 23, 0, 40, 244, 238, 2, 135, 1,
    0, 0, 0, 32, 0, 0, 255, 255, 23, 0, 199, 246
};
unsigned char data_ov015_02113c48[132] = {
    37, 2, 118, 7, 172, 13, 55, 243, 37, 2, 48, 7,
    172, 13, 124, 243, 37, 2, 238, 6, 172, 13, 190, 243,
    37, 2, 178, 16, 191, 12, 15, 243, 37, 2, 134, 15,
    191, 12, 59, 244, 37, 2, 178, 16, 191, 12, 103, 245,
    37, 2, 222, 17, 191, 12, 59, 244, 37, 2, 147, 17,
    191, 12, 21, 245, 37, 2, 208, 15, 191, 12, 21, 245,
    37, 2, 200, 15, 191, 12, 89, 243, 37, 2, 140, 17,
    191, 12, 96, 243, 63, 76, 58, 2, 21, 9, 60, 10,
    41, 254, 196, 9, 250, 0, 148, 17, 255, 225, 242, 12,
    179, 6, 241, 248, 39, 2, 160, 246, 124, 1, 168, 253,
    39, 2, 160, 246, 124, 1, 18, 253, 39, 2, 160, 246
};
unsigned char data_ov016_02113c48[4] = {
    0, 0, 4, 16
};
unsigned int data_ov020_02113c48[6] = {
    672, (unsigned int)&data_ov020_02113ab8, 704, (unsigned int)&data_ov020_02113ad8, 736, (unsigned int)&data_ov020_02113af8
};
unsigned char data_ov021_02113c48[16] = {
    0, 0, 60, 233, 122, 5, 203, 241, 0, 0, 0, 0,
    0, 0, 123, 0
};
unsigned char data_ov022_02113c48[128] = {
    254, 0, 190, 241, 44, 1, 190, 10, 0, 0, 0, 32,
    0, 0, 4, 17, 30, 0, 188, 231, 144, 1, 232, 0,
    0, 0, 0, 0, 0, 0, 6, 255, 49, 1, 20, 5,
    150, 0, 162, 23, 0, 0, 0, 0, 0, 0, 0, 30,
    49, 0, 120, 236, 44, 1, 40, 241, 0, 0, 0, 0,
    0, 0, 248, 0, 49, 0, 120, 236, 44, 1, 152, 239,
    0, 0, 0, 0, 0, 0, 248, 0, 49, 0, 176, 235,
    44, 1, 96, 240, 0, 0, 0, 0, 0, 0, 248, 0,
    49, 0, 64, 237, 44, 1, 96, 240, 0, 0, 0, 0,
    0, 0, 248, 0, 49, 0, 120, 236, 244, 1, 96, 240,
    0, 0, 0, 0, 0, 0, 71, 0
};
unsigned int data_ov029_02113c48[25] = {
    (unsigned int)&_ZN8dActor_c14BeforeBehaviorEv, (unsigned int)&_ZN8dActor_c13AfterBehaviorEj, (unsigned int)&data_ov000_020b5c24, (unsigned int)&_ZN8dActor_c12BeforeRenderEv, (unsigned int)&_ZN8dActor_c11AfterRenderEj, (unsigned int)&_ZN7fBase_c16OnPendingDestroyEv, (unsigned int)&_ZN7fBase_c9Virtual34Ejj, (unsigned int)&_ZN7fBase_c9Virtual38Ejj,
    (unsigned int)&_ZN7fBase_c13OnHeapCreatedEv, (unsigned int)&_ZN14daObjWcObj01_cD1Ev, (unsigned int)&_ZN14daObjWcObj01_cD0Ev, (unsigned int)&_ZN8dActor_c13OnYoshiTryEatEv, (unsigned int)&_ZN8dActor_c13OnTurnIntoEggER6Player, (unsigned int)&_ZN8dActor_c9Virtual50Ev, (unsigned int)&_ZN8dActor_c15OnGroundPoundedERS_, (unsigned int)&_ZN8dActor_c11OnAttacked1ERS_,
    (unsigned int)&_ZN8dActor_c11OnAttacked2ERS_, (unsigned int)&_ZN8dActor_c8OnKickedERS_, (unsigned int)&_ZN8dActor_c8OnPushedERS_, (unsigned int)&_ZN8dActor_c24OnHitByCannonBlastedCharERS_, (unsigned int)&_ZN8dActor_c15OnHitByMegaCharER6Player, (unsigned int)&_ZN8dActor_c19OnHitFromUnderneathERS_, (unsigned int)&_ZN8dActor_c16OnAimedAtWithEggEv, (unsigned int)&_ZN8dActor_c25OnAimedAtWithEggReturnVecEv,
    (unsigned int)&_ZN10dBgActor_c4KillEv
};
unsigned int data_ov036_02113c48[27] = {
    (unsigned int)&_ZN8dActor_c22BeforeCleanupResourcesEv, (unsigned int)&_ZN8dActor_c21AfterCleanupResourcesEj, (unsigned int)&_ZN14daObjRc_Hane_c8BehaviorEv, (unsigned int)&_ZN8dActor_c14BeforeBehaviorEv, (unsigned int)&_ZN8dActor_c13AfterBehaviorEj, (unsigned int)&_ZN14daObjRc_Hane_c6RenderEv, (unsigned int)&_ZN8dActor_c12BeforeRenderEv, (unsigned int)&_ZN8dActor_c11AfterRenderEj,
    (unsigned int)&_ZN7fBase_c16OnPendingDestroyEv, (unsigned int)&_ZN7fBase_c9Virtual34Ejj, (unsigned int)&_ZN7fBase_c9Virtual38Ejj, (unsigned int)&_ZN7fBase_c13OnHeapCreatedEv, (unsigned int)&_ZN14daObjRc_Hane_cD1Ev, (unsigned int)&_ZN14daObjRc_Hane_cD0Ev, (unsigned int)&_ZN8dActor_c13OnYoshiTryEatEv, (unsigned int)&_ZN8dActor_c13OnTurnIntoEggER6Player,
    (unsigned int)&_ZN8dActor_c9Virtual50Ev, (unsigned int)&_ZN8dActor_c15OnGroundPoundedERS_, (unsigned int)&_ZN8dActor_c11OnAttacked1ERS_, (unsigned int)&_ZN8dActor_c11OnAttacked2ERS_, (unsigned int)&_ZN8dActor_c8OnKickedERS_, (unsigned int)&_ZN8dActor_c8OnPushedERS_, (unsigned int)&_ZN8dActor_c24OnHitByCannonBlastedCharERS_, (unsigned int)&_ZN8dActor_c15OnHitByMegaCharER6Player,
    (unsigned int)&_ZN8dActor_c19OnHitFromUnderneathERS_, (unsigned int)&_ZN8dActor_c16OnAimedAtWithEggEv, (unsigned int)&_ZN8dActor_c25OnAimedAtWithEggReturnVecEv
};
unsigned char data_ov016_02113c4c[32] = {
    67, 76, 80, 83, 8, 0, 1, 0, 192, 15, 0, 0,
    255, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255
};
void daPgMthr_c::func_ov018_021123d0(int i)
{
    mState = &data_ov018_02113c4c[i];
unsigned int data_ov021_0211387c[6] = {
    0x2100, (unsigned int)&data_ov021_02114530, 0xa05, (unsigned int)&data_ov021_02113c58, 320, (unsigned int)&data_ov021_0211380c
};
