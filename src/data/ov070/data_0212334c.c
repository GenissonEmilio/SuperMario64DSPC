/* .data 0x0212334c..0x02123370 */
extern unsigned char daKrpa_c_classInit[];
extern unsigned char _ZTI8daKrpa_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_KERONPA[9] = {
    (unsigned int)&daKrpa_c_classInit, 0x81010e, 3, 0, 0x2d000, 0x1000000, 0xed8000, 0,
    (unsigned int)&_ZTI8daKrpa_c
};
#pragma section forcedata end
#pragma pop
