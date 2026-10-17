/* .data 0x0213d910..0x0213d918 */
extern unsigned char dScMgPachinko_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_PACHINKO[2] = {
    (unsigned int)&dScMgPachinko_c_classInit, 0x1700170
};
#pragma section forcedata end
#pragma pop
