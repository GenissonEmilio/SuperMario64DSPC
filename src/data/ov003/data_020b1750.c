/* .data 0x020b1750..0x020b1758 */
extern unsigned char dScGameOver_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_GAME_OVER[2] = {
    (unsigned int)&dScGameOver_c_classInit, 0xb0008
};
#pragma section forcedata end
#pragma pop
