/* .data 0x02130ae8..0x02130b04 */
extern unsigned char daFPkn_c_classInit_FIREPAKUN[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_FIREPAKUN[7] = {
    (unsigned int)&daFPkn_c_classInit_FIREPAKUN, 0x6d00fb, 0x18000002, 0x96000, 0x12c000, 0x1000000, 0x500000
};
#pragma section forcedata end
#pragma pop
