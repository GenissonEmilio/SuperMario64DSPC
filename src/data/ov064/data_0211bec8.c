/* .data 0x0211bec8..0x0211beec */
extern unsigned char daBbl_c_classInit[];
extern unsigned char _ZTI7daBbl_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_BUBBLE[9] = {
    (unsigned int)&daBbl_c_classInit, 0x3a00d6, 2, 0x64000, 0x64000, 0x1000000, 0x640000, 0,
    (unsigned int)&_ZTI7daBbl_c
};
#pragma section forcedata end
#pragma pop
