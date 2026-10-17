/* .data 0x02113800..0x02113820 */
extern unsigned char daObjDlPyramid_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov024_02113800[4] = {
    121, 95, 99, 0
};

unsigned int g_profile_DL_PYRAMID[7] = {
    (unsigned int)&daObjDlPyramid_c_classInit, 0xf80055, 0, 0x64000, 0xfa000, 0xc80000, 0x640000
};
#pragma section forcedata end
#pragma pop
