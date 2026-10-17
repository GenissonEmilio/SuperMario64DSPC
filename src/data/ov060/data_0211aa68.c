/* .data 0x0211aa68..0x0211aa8c */
extern unsigned char daKirai_c_classInit[];
extern unsigned char _ZTI9daKirai_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_KIRAI[9] = {
    (unsigned int)&daKirai_c_classInit, 0x93011c, 2, 0, 0x190000, 0x5dc0000, 0, 0,
    (unsigned int)&_ZTI9daKirai_c
};
#pragma section forcedata end
#pragma pop
