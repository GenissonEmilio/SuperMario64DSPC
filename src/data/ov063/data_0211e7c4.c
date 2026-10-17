/* .data 0x0211e7c4..0x0211e7e0 */
extern unsigned char daTrsIcon_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_ICON_TERESA[7] = {
    (unsigned int)&daTrsIcon_c_classInit, 0x3300d3, 0, 0, 0x1000, 0, 0
};
#pragma section forcedata end
#pragma pop
