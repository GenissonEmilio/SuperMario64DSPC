/* .data 0x020c2440..0x020c2448 */
extern unsigned char dScMiniGm_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MINIGAME[2] = {
    (unsigned int)&dScMiniGm_c_classInit, 0x80005
};
#pragma section forcedata end
#pragma pop
