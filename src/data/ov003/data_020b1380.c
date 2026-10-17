/* .data 0x020b1380..0x020b1388 */
extern unsigned char dScTitle_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_TITLE[2] = {
    (unsigned int)&dScTitle_c_classInit, 0x40002
};
#pragma section forcedata end
#pragma pop
