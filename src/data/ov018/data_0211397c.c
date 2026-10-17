/* .data 0x0211397c..0x021139b0 */
extern unsigned char _ZTVN3abi20__si_class_type_infoE[];
extern unsigned char _ZTS10daPgMthr_c[];
extern unsigned char _ZTI8dActor_c[];
extern unsigned char daPgMthr_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int _ZTI10daPgMthr_c[1] = {
    (unsigned int)&_ZTVN3abi20__si_class_type_infoE
};

unsigned int data_ov018_02113980[2] = {
    (unsigned int)&_ZTS10daPgMthr_c, (unsigned int)&_ZTI8dActor_c
};

unsigned char _ZTS10daPgMthr_c[16] = {
    49, 48, 100, 97, 80, 103, 77, 116, 104, 114, 95, 99,
    0, 0, 0, 0
};

unsigned int g_profile_PENGUIN_MOTHER[6] = {
    (unsigned int)&daPgMthr_c_classInit, 0x730101, 3, 0xa0000, 0x96000, 0x1000000
};
#pragma section forcedata end
#pragma pop
