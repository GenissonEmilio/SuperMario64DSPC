/* .data 0x02130acc..0x02130ae8 */
extern unsigned char daFPkn_c_classInit_PAKUN2[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_PAKUN2[7] = {
    (unsigned int)&daFPkn_c_classInit_PAKUN2, 0x6f00fd, 0x10000006, 0x50000, 0x50000, 0x1000000, 0x500000
};
#pragma section forcedata end
#pragma pop
