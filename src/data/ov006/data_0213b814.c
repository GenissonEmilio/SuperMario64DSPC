/* .data 0x0213b814..0x0213b81c */
extern unsigned char dScMgAmida_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_AMIDA[2] = {
    (unsigned int)&dScMgAmida_c_classInit, 0x1730173
};
#pragma section forcedata end
#pragma pop
