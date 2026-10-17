/* .data 0x021373f8..0x0213744c */
extern unsigned char daObjSeesaw_c_classInit_KM1_SEESAW[];
extern unsigned char daObjSeesaw_c_classInit_KM2_YOKOSEESAW[];
extern unsigned char daObjSeesaw_c_classInit_KM3_SEESAW[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_KM1_SEESAW[1] = {
    (unsigned int)&daObjSeesaw_c_classInit_KM1_SEESAW
};

unsigned char data_ov095_021373fc[24] = {
    133, 0, 174, 0, 2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 64, 0, 0, 0, 0, 1, 0, 0, 0, 0
};

unsigned int g_profile_KM2_YOKOSEESAW[7] = {
    (unsigned int)&daObjSeesaw_c_classInit_KM2_YOKOSEESAW, 0xd6008f, 2, 0, 0x400000, 0x1000000, 0
};

unsigned int g_profile_KM3_SEESAW[7] = {
    (unsigned int)&daObjSeesaw_c_classInit_KM3_SEESAW, 0xdc0095, 2, 0, 0x400000, 0x1000000, 0
};
#pragma section forcedata end
#pragma pop
