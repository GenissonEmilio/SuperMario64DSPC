/* .data 0x0211a5f4..0x0211a610 */
extern unsigned char daKpa_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_KOOPA[7] = {
    (unsigned int)&daKpa_c_classInit, 0x8f0117, 0x4000000, 0x64000, 0x64000, 0x1000000, 0x1000000
};
#pragma section forcedata end
#pragma pop
