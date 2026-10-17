/* .data 0x0213bc50..0x0213bc58 */
extern unsigned char dScMgCard_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_CARD[2] = {
    (unsigned int)&dScMgCard_c_classInit, 0x17b017b
};
#pragma section forcedata end
#pragma pop
