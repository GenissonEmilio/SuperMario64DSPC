/* .data 0x0213fd6c..0x0213fd74 */
extern unsigned char dScMgBSC_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_BS_CARD[2] = {
    (unsigned int)&dScMgBSC_c_classInit, 0x1840184
};
#pragma section forcedata end
#pragma pop
