/* .data 0x02128a98..0x02128abc */
extern unsigned char daSnowball_c_classInit[];
extern unsigned char _ZTI12daSnowball_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_SNOWBALL[9] = {
    (unsigned int)&daSnowball_c_classInit, 0x4e00e0, 2, 0x64000, 0x64000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI12daSnowball_c
};
#pragma section forcedata end
#pragma pop
