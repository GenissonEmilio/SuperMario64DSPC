/* .data 0x0213e508..0x0213e510 */
extern unsigned char dScMgSlot3_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_SLOT3[2] = {
    (unsigned int)&dScMgSlot3_c_classInit, 0x16d016d
};
#pragma section forcedata end
#pragma pop
