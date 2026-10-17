/* .data 0x0211cd84..0x0211cda0 */
extern unsigned char daDossy_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_DOSSY[7] = {
    (unsigned int)&daDossy_c_classInit, 0x13500a8, 2, 0xc8000, 0x4b0000, 0x1f40000, 0x1000000
};
#pragma section forcedata end
#pragma pop
