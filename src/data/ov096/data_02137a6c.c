/* .data 0x02137a6c..0x02137a90 */
extern unsigned char daTor_c_classInit[];
extern unsigned char _ZTI7daTor_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_TORNADO[9] = {
    (unsigned int)&daTor_c_classInit, 0x1310134, 0, 0x64000, 0x64000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI7daTor_c
};
#pragma section forcedata end
#pragma pop
