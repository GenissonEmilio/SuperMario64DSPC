/* .data 0x0213bedc..0x0213bee4 */
extern unsigned char dScMgCoin_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_COIN[2] = {
    (unsigned int)&dScMgCoin_c_classInit, 0x17a017a
};
#pragma section forcedata end
#pragma pop
