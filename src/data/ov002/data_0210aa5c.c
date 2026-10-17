/* .data 0x0210aa5c..0x0210aa78 */
extern unsigned char daStar_c_classInit_SILVER_STAR[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_SILVER_STAR[7] = {
    (unsigned int)&daStar_c_classInit_SILVER_STAR, 0x4100b3, 0x28000002, 0x32000, 0x1f4000, 0x1194000, 0x1000000
};
#pragma section forcedata end
#pragma pop
