/* .data 0x0211c17c..0x0211c198 */
extern unsigned char daObjFl_Coin_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_FL_COIN[7] = {
    (unsigned int)&daObjFl_Coin_c_classInit, 0x11f004f, 0, 0, 0x400000, 0x2000000, 0x2000000
};
#pragma section forcedata end
#pragma pop
