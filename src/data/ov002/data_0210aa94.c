/* .data 0x0210aa94..0x0210aab8 */
extern unsigned char StarCamera_Spawn[];
extern unsigned char _ZTI12daStarBase_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_STAR_CAMERA[9] = {
    (unsigned int)&StarCamera_Spawn, 0x3f00b1, 0, 0, 0xc8000, 0, 0, 0,
    (unsigned int)&_ZTI12daStarBase_c
};
#pragma section forcedata end
#pragma pop
