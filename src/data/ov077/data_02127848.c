/* .data 0x02127848..0x0212786c */
extern unsigned char daJgm_c_classInit[];
extern unsigned char _ZTI7daJgm_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_JUGEM[9] = {
    (unsigned int)&daJgm_c_classInit, 0x7c0109, 0x10000006, 0x1e000, 0x64000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI7daJgm_c
};
#pragma section forcedata end
#pragma pop
