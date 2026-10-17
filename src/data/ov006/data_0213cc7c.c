/* .data 0x0213cc7c..0x0213cc84 */
extern unsigned char dScMgJump2_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_JUMP2[2] = {
    (unsigned int)&dScMgJump2_c_classInit, 0x1750175
};
#pragma section forcedata end
#pragma pop
