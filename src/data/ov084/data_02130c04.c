/* .data 0x02130c04..0x02130c28 */
extern unsigned char daPkn_c_classInit[];
extern unsigned char _ZTI7daPkn_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_PAKUN[9] = {
    (unsigned int)&daPkn_c_classInit, 0x6c00fa, 0x10000002, 0x64000, 0xc8000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI7daPkn_c
};
#pragma section forcedata end
#pragma pop
