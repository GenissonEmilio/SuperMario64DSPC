/* .data 0x0211cda0..0x0211cdc4 */
extern unsigned char daDossyCap_c_classInit[];
extern unsigned char _ZTI12daDossyCap_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_DOSSY_CAP[9] = {
    (unsigned int)&daDossyCap_c_classInit, 0x13600a9, 2, 0, 0x12c000, 0x1f40000, 0x1000000, 0,
    (unsigned int)&_ZTI12daDossyCap_c
};
#pragma section forcedata end
#pragma pop
