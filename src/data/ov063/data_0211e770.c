/* .data 0x0211e770..0x0211e78c */
extern unsigned char daTrs_c_classInit_TERESA[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_TERESA[7] = {
    (unsigned int)&daTrs_c_classInit_TERESA, 0x3100d1, 6, 0x64000, 0x64000, 0x1000000, 0xa00000
};
#pragma section forcedata end
#pragma pop
