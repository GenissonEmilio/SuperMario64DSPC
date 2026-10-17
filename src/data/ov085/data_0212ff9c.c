/* .data 0x0212ff9c..0x0212ffc0 */
extern unsigned char daPeach_c_classInit[];
extern unsigned char _ZTI9daPeach_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_PEACH_PRINCESS[9] = {
    (unsigned int)&daPeach_c_classInit, 0xac00ba, 3, 0x64000, 0x64000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI9daPeach_c
};
#pragma section forcedata end
#pragma pop
