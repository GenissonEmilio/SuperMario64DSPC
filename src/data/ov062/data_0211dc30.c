/* .data 0x0211dc30..0x0211dc54 */
extern unsigned char daRFlag_c_classInit[];
extern unsigned char _ZTI9daRFlag_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_RACE_FLAG[9] = {
    (unsigned int)&daRFlag_c_classInit, 0x1e00cd, 2, 0x190000, 0x190000, 0x13e8000, 0x13e8000, 0,
    (unsigned int)&_ZTI9daRFlag_c
};
#pragma section forcedata end
#pragma pop
