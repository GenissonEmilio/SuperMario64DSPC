/* .data 0x0211e78c..0x0211e7a8 */
extern unsigned char daTrs_c_classInit_BOSS_TERESA[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_BOSS_TERESA[7] = {
    (unsigned int)&daTrs_c_classInit_BOSS_TERESA, 0x3200d2, 6, 0xc8000, 0xc8000, 0x1000000, 0xa00000
};
#pragma section forcedata end
#pragma pop
