/* .data 0x02113b7c..0x02113b80 */
extern unsigned char daMcFlag_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MC_FLAG[1] = {
    (unsigned int)&daMcFlag_c_classInit
};
#pragma section forcedata end
#pragma pop
