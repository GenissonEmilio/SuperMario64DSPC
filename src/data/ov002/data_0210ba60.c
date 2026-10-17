/* .data 0x0210ba60..0x0210ba7c */
extern unsigned char daDemo_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_DEMO[7] = {
    (unsigned int)&daDemo_c_classInit, 0x1600160, 0x64800002, 0x3e8000, 0x3e8000, 0x2710000, 0x2710000
};
#pragma section forcedata end
#pragma pop
