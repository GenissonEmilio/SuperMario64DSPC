/* .data 0x0213badc..0x0213bae4 */
extern unsigned char dScMgBomroom_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_BOMROOM[2] = {
    (unsigned int)&dScMgBomroom_c_classInit, 0x1720172
};
#pragma section forcedata end
#pragma pop
