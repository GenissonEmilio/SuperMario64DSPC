/* .data 0x02122dc4..0x02122de8 */
extern unsigned char daEyBm_c_classInit[];
extern unsigned char _ZTI8daEyBm_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_EYEKUN_BEAM[9] = {
    (unsigned int)&daEyBm_c_classInit, 0x7a0108, 2, 0, 0x19000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI8daEyBm_c
};
#pragma section forcedata end
#pragma pop
