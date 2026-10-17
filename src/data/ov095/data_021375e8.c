/* .data 0x021375e8..0x02137604 */
extern unsigned char daUdlift_c_classInit_UDLIFT[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_UDLIFT[7] = {
    (unsigned int)&daUdlift_c_classInit_UDLIFT, 0x12d0021, 0x1000002, 0, 0x1f4000, 0xaf0000, 0x4b0000
};
#pragma section forcedata end
#pragma pop
