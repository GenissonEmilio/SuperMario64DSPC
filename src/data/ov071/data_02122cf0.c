/* .data 0x02122cf0..0x02122d0c */
extern unsigned char daEykn_c_classInit_EYEKUN[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_EYEKUN[7] = {
    (unsigned int)&daEykn_c_classInit_EYEKUN, 0x780106, 0x10000003, 0, 0x5f000, 0x1000000, 0xbb8000
};
#pragma section forcedata end
#pragma pop
