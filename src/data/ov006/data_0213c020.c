/* .data 0x0213c020..0x0213c028 */
extern unsigned char dScMgCup_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_CUP[2] = {
    (unsigned int)&dScMgCup_c_classInit, 0x1690169
};
#pragma section forcedata end
#pragma pop
