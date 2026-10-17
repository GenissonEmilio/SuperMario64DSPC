/* .data 0x02111928..0x02111984 */
extern unsigned char daObjHsBillboard_c_classInit_HS_STAR[];
extern unsigned char daObjHsBillboard_c_classInit_HS_Y_STAR[];
extern unsigned char daObjHsBillboard_c_classInit_HS_B_STAR[];
extern unsigned char _ZTI18daObjHsBillboard_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_HS_STAR[1] = {
    (unsigned int)&daObjHsBillboard_c_classInit_HS_STAR
};

unsigned char data_ov031_0211192c[24] = {
    47, 1, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0
};

unsigned int g_profile_HS_Y_STAR[7] = {
    (unsigned int)&daObjHsBillboard_c_classInit_HS_Y_STAR, 0xc10130, 0, 0, 0x10000, 0, 0
};

unsigned int g_profile_HS_B_STAR[9] = {
    (unsigned int)&daObjHsBillboard_c_classInit_HS_B_STAR, 0xc20131, 0, 0, 0x10000, 0, 0, 0,
    (unsigned int)&_ZTI18daObjHsBillboard_c
};
#pragma section forcedata end
#pragma pop
