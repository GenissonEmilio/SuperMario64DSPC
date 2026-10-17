/* .data 0x02128174..0x02128198 */
extern unsigned char daBttBk_c_classInit[];
extern unsigned char _ZTI9daBttBk_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_BATTA_BLOCK[9] = {
    (unsigned int)&daBttBk_c_classInit, 0x7b00c1, 0x8283, 0x32000, 0x5a000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI9daBttBk_c
};
#pragma section forcedata end
#pragma pop
