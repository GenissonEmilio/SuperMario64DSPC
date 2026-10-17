/* .data 0x02114498..0x021144bc */
extern unsigned char daHanachan_c_classInit[];
extern unsigned char _ZTI12daHanachan_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_HANACHAN[9] = {
    (unsigned int)&daHanachan_c_classInit, 0x6a00f8, 6, 0x100000, 0x800000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI12daHanachan_c
};
#pragma section forcedata end
#pragma pop
