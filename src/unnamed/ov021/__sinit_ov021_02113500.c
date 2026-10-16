/* Runtime asset handles resolved through the overlay 0 file table. */
enum sinit_ov021_02113500_AssetId {
    ASSET_CV_LIFT_BTN_BMD = 0x05d5,
    ASSET_CV_LIFT_BTN_KCL = 0x05d6,
    ASSET_CV_NEWS_LIFT_BMD = 0x05d7,
    ASSET_CV_NEWS_LIFT_KCL = 0x05d8
};

extern void func_02017acc();
extern void func_020731dc(void*, void*, void*);
extern void func_02017b4c();
extern int func_02017ab4[];
extern int SharedFilePtr_Destruct_Clsn[];
extern int _ZN7Vector3D1Ev[];
extern int data_ov021_021149a0[];
extern int data_ov021_021149a8[];
extern int data_ov021_021149b0[];
extern int data_ov021_021149b8[];
extern int data_ov021_021149c0[];
extern int data_ov021_021149e4[];
extern int data_ov021_021149f0[];
extern int data_ov021_021149d8[];
extern int data_ov021_021149cc[];
extern int data_ov021_021149fc[];
extern int data_ov021_02114a08[];
extern int data_ov021_02114a14[];

typedef struct { int x, y, z; } V3;
extern V3 data_ov021_02114a20;
extern V3 data_ov021_02114a2c;
extern V3 data_ov021_02114a38;
extern V3 data_ov021_02114a44;

void __sinit_ov021_02113500(void)
{
    func_02017acc(data_ov021_021149a0, ASSET_CV_NEWS_LIFT_BMD);
    func_020731dc(data_ov021_021149a0, func_02017ab4, data_ov021_021149c0);
    func_02017b4c(data_ov021_021149a8, ASSET_CV_NEWS_LIFT_KCL);
    func_020731dc(data_ov021_021149a8, SharedFilePtr_Destruct_Clsn, data_ov021_02114a14);
    func_02017acc(data_ov021_021149b0, ASSET_CV_LIFT_BTN_BMD);
    func_020731dc(data_ov021_021149b0, func_02017ab4, data_ov021_021149e4);
    func_02017b4c(data_ov021_021149b8, ASSET_CV_LIFT_BTN_KCL);
    func_020731dc(data_ov021_021149b8, SharedFilePtr_Destruct_Clsn, data_ov021_021149f0);

    data_ov021_02114a20.x = 0;
    data_ov021_02114a20.y = 0x32000;
    data_ov021_02114a20.z = 0xc8000;
    func_020731dc(&data_ov021_02114a20, _ZN7Vector3D1Ev, data_ov021_021149fc);

    { volatile V3* p = (volatile V3*)&data_ov021_02114a2c; p->x = 0; p->y = 0x32000; p->z = -0xc8000; }
    func_020731dc(&data_ov021_02114a2c, _ZN7Vector3D1Ev, data_ov021_02114a08);

    { volatile V3* p = (volatile V3*)&data_ov021_02114a38; p->x = 0xc8000; p->y = 0x32000; p->z = 0; }
    func_020731dc(&data_ov021_02114a38, _ZN7Vector3D1Ev, data_ov021_021149d8);

    { volatile V3* p = (volatile V3*)&data_ov021_02114a44; p->x = -0xc8000; p->y = 0x32000; p->z = 0; }
    func_020731dc(&data_ov021_02114a44, _ZN7Vector3D1Ev, data_ov021_021149cc);
}

/* .data 0x021148dc..0x021149a0 */
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
#pragma cplusplus on
extern "C" {
extern unsigned int _ZTS16daObjCvShutter_c[];
extern unsigned int data_ov021_021148e0[];
extern unsigned int g_profile_CV_SHUTTER[];
extern unsigned int _ZTV16daObjCvShutter_c[];
extern unsigned char data_ov000_020babf0[];
extern unsigned char _ZN7fBase_c13OnHeapCreatedEv[];
extern unsigned char _ZN8dActor_c8OnPushedERS_[];
extern unsigned char _ZN8dActor_c14BeforeBehaviorEv[];
extern unsigned char _ZN8dActor_c11AfterRenderEj[];
extern unsigned char _ZN8dActor_c15OnHitByMegaCharER6Player[];
extern unsigned char daObjCvShutter_c_classInit[];
extern unsigned char _ZN16daObjCvShutter_cD1Ev[];
extern unsigned char _ZN8dActor_c19OnHitFromUnderneathERS_[];
extern unsigned char _ZN8dActor_c19BeforeInitResourcesEv[];
extern unsigned char _ZN8dActor_c24OnHitByCannonBlastedCharERS_[];
extern unsigned char _ZN8dActor_c21AfterCleanupResourcesEj[];
extern unsigned char _ZN16daObjCvShutter_c16CleanupResourcesEv[];
extern unsigned char _ZN16daObjCvShutter_c8BehaviorEv[];
extern unsigned char _ZN16daObjCvShutter_c13InitResourcesEv[];
extern unsigned char _ZN8dActor_c11OnAttacked1ERS_[];
extern unsigned char _ZN7fBase_c16OnPendingDestroyEv[];
extern unsigned char _ZN8dActor_c11OnAttacked2ERS_[];
extern unsigned char _ZN8dActor_c22BeforeCleanupResourcesEv[];
extern unsigned char _ZN7fBase_c9Virtual38Ejj[];
extern unsigned char _ZN7fBase_c9Virtual34Ejj[];
extern unsigned char _ZN8dActor_c18AfterInitResourcesEj[];
extern unsigned char _ZN8dActor_c13OnTurnIntoEggER6Player[];
extern unsigned char _ZN8dActor_c16OnAimedAtWithEggEv[];
extern unsigned char _ZN8dActor_c15OnGroundPoundedERS_[];
extern unsigned char _ZTI16daObjCvShutter_c[];
extern unsigned char _ZN16daObjCvShutter_cD0Ev[];
extern unsigned char _ZN8dActor_c25OnAimedAtWithEggReturnVecEv[];
extern unsigned char _ZN8dActor_c13OnYoshiTryEatEv[];
extern unsigned char _ZN10dBgActor_c4KillEv[];
extern unsigned char _ZN8dActor_c8OnKickedERS_[];
extern unsigned char _ZN8dActor_c12BeforeRenderEv[];
extern unsigned char _ZN8dActor_c13AfterBehaviorEj[];
extern unsigned char _ZN8dActor_c9Virtual50Ev[];
unsigned int _ZTS16daObjCvShutter_c[1] = {
    0x61643631u,
};
unsigned int data_ov021_021148e0[4] = {
    0x436a624fu, 0x75685376u, 0x72657474u, 0x0000635fu,
};
unsigned int g_profile_CV_SHUTTER[9] = {
    (unsigned int)daObjCvShutter_c_classInit, 0x008a0043u, 0x00000002u, 0x00120000u,
    0x00400000u, 0x01000000u, 0x00000000u, 0x00000000u,
    (unsigned int)_ZTI16daObjCvShutter_c,
};
unsigned int _ZTV16daObjCvShutter_c[35] = {
    (unsigned int)_ZN16daObjCvShutter_c13InitResourcesEv, (unsigned int)_ZN8dActor_c19BeforeInitResourcesEv, (unsigned int)_ZN8dActor_c18AfterInitResourcesEj, (unsigned int)_ZN16daObjCvShutter_c16CleanupResourcesEv,
    (unsigned int)_ZN8dActor_c22BeforeCleanupResourcesEv, (unsigned int)_ZN8dActor_c21AfterCleanupResourcesEj, (unsigned int)_ZN16daObjCvShutter_c8BehaviorEv, (unsigned int)_ZN8dActor_c14BeforeBehaviorEv,
    (unsigned int)_ZN8dActor_c13AfterBehaviorEj, (unsigned int)data_ov000_020babf0, (unsigned int)_ZN8dActor_c12BeforeRenderEv, (unsigned int)_ZN8dActor_c11AfterRenderEj,
    (unsigned int)_ZN7fBase_c16OnPendingDestroyEv, (unsigned int)_ZN7fBase_c9Virtual34Ejj, (unsigned int)_ZN7fBase_c9Virtual38Ejj, (unsigned int)_ZN7fBase_c13OnHeapCreatedEv,
    (unsigned int)_ZN16daObjCvShutter_cD1Ev, (unsigned int)_ZN16daObjCvShutter_cD0Ev, (unsigned int)_ZN8dActor_c13OnYoshiTryEatEv, (unsigned int)_ZN8dActor_c13OnTurnIntoEggER6Player,
    (unsigned int)_ZN8dActor_c9Virtual50Ev, (unsigned int)_ZN8dActor_c15OnGroundPoundedERS_, (unsigned int)_ZN8dActor_c11OnAttacked1ERS_, (unsigned int)_ZN8dActor_c11OnAttacked2ERS_,
    (unsigned int)_ZN8dActor_c8OnKickedERS_, (unsigned int)_ZN8dActor_c8OnPushedERS_, (unsigned int)_ZN8dActor_c24OnHitByCannonBlastedCharERS_, (unsigned int)_ZN8dActor_c15OnHitByMegaCharER6Player,
    (unsigned int)_ZN8dActor_c19OnHitFromUnderneathERS_, (unsigned int)_ZN8dActor_c16OnAimedAtWithEggEv, (unsigned int)_ZN8dActor_c25OnAimedAtWithEggReturnVecEv, (unsigned int)_ZN10dBgActor_c4KillEv,
    0x00000000u, 0x00000000u, 0x00000000u,
};
}
#pragma cplusplus off
#pragma section forcedata end
