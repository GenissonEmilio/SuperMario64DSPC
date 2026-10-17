/* .data 0x02137998..0x021379b4 */
extern unsigned char daSanbo_c_classInit_SANBO[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_SANBO[7] = {
    (unsigned int)&daSanbo_c_classInit_SANBO, 0x5f00f0, 0x10000002, 0x1f4000, 0x1f4000, 0x1000000, 0x1000000
};
#pragma section forcedata end
#pragma pop
