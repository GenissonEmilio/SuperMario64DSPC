/* .data 0x02134144..0x02134168 */
extern unsigned char daMenbo_c_classInit[];
extern unsigned char _ZTI9daMenbo_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MENBO[9] = {
    (unsigned int)&daMenbo_c_classInit, 0x5500e6, 0x10000002, 0xc8000, 0xc8000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI9daMenbo_c
};
#pragma section forcedata end
#pragma pop
