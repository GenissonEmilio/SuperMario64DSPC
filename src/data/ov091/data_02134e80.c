/* .data 0x02134e80..0x02134e9c */
extern unsigned char daLinelift2_c_classInit_KM3_LIFT[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_KM3_LIFT[7] = {
    (unsigned int)&daLinelift2_c_classInit_KM3_LIFT, 0x12e009d, 2, 0x100000, 0x300000, 0x1000000, 0
};
#pragma section forcedata end
#pragma pop
