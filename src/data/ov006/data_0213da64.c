/* .data 0x0213da64..0x0213da6c */
extern unsigned char dScMgPachinko2_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_TAMAIRE[2] = {
    (unsigned int)&dScMgPachinko2_c_classInit, 0x1710171
};
#pragma section forcedata end
#pragma pop
