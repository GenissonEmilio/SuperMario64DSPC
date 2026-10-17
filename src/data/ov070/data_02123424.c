/* .data 0x02123424..0x02123448 */
extern unsigned char daKpFr_c_classInit[];
extern unsigned char _ZTI8daKpFr_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_KERONPA_FIRE[9] = {
    (unsigned int)&daKpFr_c_classInit, 0x82010f, 6, 0x1e000, 0x3c000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI8daKpFr_c
};
#pragma section forcedata end
#pragma pop
