/* .data 0x021373c0..0x021373f8 */
extern unsigned char _ZTVN3abi20__si_class_type_infoE[];
extern unsigned char _ZTS13daObjSeesaw_c[];
extern unsigned char _ZTI10dBgActor_c[];
extern unsigned char daObjSeesaw_c_classInit_SEESAW[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int _ZTI13daObjSeesaw_c[3] = {
    (unsigned int)&_ZTVN3abi20__si_class_type_infoE, (unsigned int)&_ZTS13daObjSeesaw_c, (unsigned int)&_ZTI10dBgActor_c
};

unsigned char _ZTS13daObjSeesaw_c[16] = {
    49, 51, 100, 97, 79, 98, 106, 83, 101, 101, 115, 97,
    119, 95, 99, 0
};

unsigned int g_profile_SEESAW[7] = {
    (unsigned int)&daObjSeesaw_c_classInit_SEESAW, 0x128001c, 2, 0, 0x500000, 0x1850000, 0
};
#pragma section forcedata end
#pragma pop
