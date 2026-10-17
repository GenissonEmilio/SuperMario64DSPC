/* .data 0x02122c08..0x02122c2c */
extern unsigned char daSpd_c_classInit[];
extern unsigned char _ZTI7daSpd_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_SPIDER[9] = {
    (unsigned int)&daSpd_c_classInit, 0x7100ff, 0x10000007, 0x32000, 0x46000, 0x1000000, 0x7d0000, 0,
    (unsigned int)&_ZTI7daSpd_c
};
#pragma section forcedata end
#pragma pop
