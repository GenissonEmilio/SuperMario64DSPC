/* .data 0x0210b324..0x0210b340 */
extern unsigned char daESwitch_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_ENEMY_SWITCH[7] = {
    (unsigned int)&daESwitch_c_classInit, 0x1650165, 0, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
