/* .data 0x0210aa40..0x0210aa5c */
extern unsigned char daStar_c_classInit_STAR[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_STAR[7] = {
    (unsigned int)&daStar_c_classInit_STAR, 0x4000b2, 0x20000002, 0x32000, 0x1f4000, 0x1000000, 0x1000000
};
#pragma section forcedata end
#pragma pop
