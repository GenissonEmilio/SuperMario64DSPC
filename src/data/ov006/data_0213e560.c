/* .data 0x0213e560..0x0213e568 */
extern unsigned char dScMgSlot1_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_SLOT1[2] = {
    (unsigned int)&dScMgSlot1_c_classInit, 0x16c016c
};
#pragma section forcedata end
#pragma pop
