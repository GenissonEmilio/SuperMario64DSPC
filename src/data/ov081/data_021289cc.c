/* .data 0x021289cc..0x021289f0 */
extern unsigned char daSnowman_c_classInit[];
extern unsigned char _ZTI11daSnowman_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_SNOWMAN[9] = {
    (unsigned int)&daSnowman_c_classInit, 0x4d00df, 0x8000003, 0x64000, 0xc8000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI11daSnowman_c
};
#pragma section forcedata end
#pragma pop
