/* .data 0x0211ed10..0x0211ed34 */
extern unsigned char daPiano_c_classInit[];
extern unsigned char _ZTI9daPiano_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_PIANO[9] = {
    (unsigned int)&daPiano_c_classInit, 0x6b00f9, 3, 0x60000, 0x200000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI9daPiano_c
};
#pragma section forcedata end
#pragma pop
