/* .data 0x0213e2f0..0x0213e2f8 */
extern unsigned char dScMgRoulette_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_ROULETTE[2] = {
    (unsigned int)&dScMgRoulette_c_classInit, 0x17f017f
};
#pragma section forcedata end
#pragma pop
