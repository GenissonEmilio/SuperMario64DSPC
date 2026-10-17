/* .data 0x02127ec4..0x02127ee8 */
extern unsigned char daKlr_c_classInit[];
extern unsigned char _ZTI7daKlr_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_KILLER[9] = {
    (unsigned int)&daKlr_c_classInit, 0x4c00de, 2, 0, 0x64000, 0x1000000, 0x500000, 0,
    (unsigned int)&_ZTI7daKlr_c
};
#pragma section forcedata end
#pragma pop
