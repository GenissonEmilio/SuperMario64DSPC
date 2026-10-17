/* .data 0x02114824..0x02114848 */
extern unsigned char daGrock_c_classInit[];
extern unsigned char _ZTI9daGrock_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_GORO_ROCK[9] = {
    (unsigned int)&daGrock_c_classInit, 0x4600dd, 2, 0, 0x12c000, 0x17d0000, 0x17d0000, 0,
    (unsigned int)&_ZTI9daGrock_c
};
#pragma section forcedata end
#pragma pop
