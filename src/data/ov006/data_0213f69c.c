/* .data 0x0213f69c..0x0213f6a4 */
extern unsigned char dScMgSound_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_SOUND[2] = {
    (unsigned int)&dScMgSound_c_classInit, 0x16f016f
};
#pragma section forcedata end
#pragma pop
