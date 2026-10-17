/* .data 0x0210b340..0x0210b364 */
extern unsigned char daECreate_c_classInit[];
extern unsigned char _ZTI11daECreate_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_ENEMY_CREATE[9] = {
    (unsigned int)&daECreate_c_classInit, 0x1660166, 0, 0, 0, 0, 0, 0,
    (unsigned int)&_ZTI11daECreate_c
};
#pragma section forcedata end
#pragma pop
