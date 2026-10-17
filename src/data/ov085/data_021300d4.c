/* .data 0x021300d4..0x021300f8 */
extern unsigned char daMip_c_classInit[];
extern unsigned char _ZTI7daMip_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MIP[9] = {
    (unsigned int)&daMip_c_classInit, 0x5300bb, 0x8282, 0x64000, 0xc8000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI7daMip_c
};
#pragma section forcedata end
#pragma pop
