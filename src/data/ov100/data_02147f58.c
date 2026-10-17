/* .data 0x02147f58..0x02147f7c */
extern unsigned char daIbl_c_classInit[];
extern unsigned char _ZTI7daIbl_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_IRONBALL[9] = {
    (unsigned int)&daIbl_c_classInit, 0x4500dc, 2, 0x64000, 0x7d0000, 0x1800000, 0x1800000, 0,
    (unsigned int)&_ZTI7daIbl_c
};
#pragma section forcedata end
#pragma pop
