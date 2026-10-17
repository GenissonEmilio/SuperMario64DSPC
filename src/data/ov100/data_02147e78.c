/* .data 0x02147e78..0x02147e9c */
extern unsigned char daBtfly_c_classInit[];
extern unsigned char _ZTI9daBtfly_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_BUTTERFLY[9] = {
    (unsigned int)&daBtfly_c_classInit, 0x1500150, 0x10002, 0x32000, 0x32000, 0x1000000, 0x320000, 0,
    (unsigned int)&_ZTI9daBtfly_c
};
#pragma section forcedata end
#pragma pop
