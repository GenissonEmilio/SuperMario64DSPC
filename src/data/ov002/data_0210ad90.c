/* .data 0x0210ad90..0x0210adb4 */
extern unsigned char daYegg_c_classInit[];
extern unsigned char _ZTI8daYegg_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_YOSHI_EGG[9] = {
    (unsigned int)&daYegg_c_classInit, 0x9d0009, 2, 0x32000, 0x46000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI8daYegg_c
};
#pragma section forcedata end
#pragma pop
