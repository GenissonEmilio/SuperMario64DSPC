/* .data 0x0213f974..0x0213f97c */
extern unsigned char dScMgTeresa_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_TERESA[2] = {
    (unsigned int)&dScMgTeresa_c_classInit, 0x1830183
};
#pragma section forcedata end
#pragma pop
