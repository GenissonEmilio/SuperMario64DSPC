/* .data 0x021322ac..0x021322d0 */
extern unsigned char daOnms_c_classInit[];
extern unsigned char _ZTI8daOnms_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_ONIMASU[9] = {
    (unsigned int)&daOnms_c_classInit, 0x1320135, 0x2000002, 0xfa000, 0x2ee000, 0x1fa0000, 0x1fa0000, 0,
    (unsigned int)&_ZTI8daOnms_c
};
#pragma section forcedata end
#pragma pop
