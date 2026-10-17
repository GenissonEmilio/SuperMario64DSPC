/* .data 0x02113934..0x02113958 */
extern unsigned char daSBird_c_classInit[];
extern unsigned char _ZTI9daSBird_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_SBIRD[9] = {
    (unsigned int)&daSBird_c_classInit, 0x1570157, 0x10002, 0, 0x28000, 0x1000000, 0x320000, 0,
    (unsigned int)&_ZTI9daSBird_c
};
#pragma section forcedata end
#pragma pop
