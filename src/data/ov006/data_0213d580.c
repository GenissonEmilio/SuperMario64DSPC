/* .data 0x0213d580..0x0213d588 */
extern unsigned char dScMgMCarlo_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_MCARLO[2] = {
    (unsigned int)&dScMgMCarlo_c_classInit, 0x17d017d
};
#pragma section forcedata end
#pragma pop
