/* .data 0x02108388..0x021083a4 */
extern unsigned char da1up_c_classInit_ONEUPKINOKO[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_ONEUPKINOKO[7] = {
    (unsigned int)&da1up_c_classInit_ONEUPKINOKO, 0x8c0114, 3, 0x32000, 0x12c000, 0x1000000, 0x1000000
};
#pragma section forcedata end
#pragma pop
