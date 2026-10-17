/* .data 0x0213744c..0x021374a0 */
extern unsigned char daObjSeesaw_c_classInit_KM3_YOKOSEESAW[];
extern unsigned char daObjSeesaw_c_classInit_RC_SEESAW[];
extern unsigned char daObjSeesaw_c_classInit_BOMB_SEESAW[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_KM3_YOKOSEESAW[2] = {
    (unsigned int)&daObjSeesaw_c_classInit_KM3_YOKOSEESAW, 0xdd0096
};

unsigned char data_ov095_02137454[20] = {
    2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 2, 0, 0, 0, 0
};

unsigned int g_profile_RC_SEESAW[7] = {
    (unsigned int)&daObjSeesaw_c_classInit_RC_SEESAW, 0x1020080, 2, 0, 0x400000, 0x1000000, 0
};

unsigned int g_profile_BOMB_SEESAW[7] = {
    (unsigned int)&daObjSeesaw_c_classInit_BOMB_SEESAW, 0xad0027, 2, 0, 0x400000, 0x1000000, 0
};
#pragma section forcedata end
#pragma pop
