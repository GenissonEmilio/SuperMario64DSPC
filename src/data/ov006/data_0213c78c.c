/* .data 0x0213c78c..0x0213c794 */
extern unsigned char dScMg3DEsp_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_3DESP[2] = {
    (unsigned int)&dScMg3DEsp_c_classInit, 0x1850185
};
#pragma section forcedata end
#pragma pop
