/* .data 0x02128be0..0x02128c04 */
extern unsigned char daGmch_c_classInit[];
extern unsigned char _ZTI8daGmch_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_GAMAGUCHI[9] = {
    (unsigned int)&daGmch_c_classInit, 0x770105, 0x10000007, 0x3f000, 0x50000, 0x1000000, 0xa28000, 0,
    (unsigned int)&_ZTI8daGmch_c
};
#pragma section forcedata end
#pragma pop
