/* .data 0x0210c210..0x0210c218 */
extern unsigned char dMeter_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_METER[2] = {
    (unsigned int)&dMeter_c_classInit, 0x14e014e
};
#pragma section forcedata end
#pragma pop
