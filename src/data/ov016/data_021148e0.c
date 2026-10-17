/* .data 0x021148e0..0x021148f0 */
extern unsigned char daMoray_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MORAY[4] = {
    (unsigned int)&daMoray_c_classInit, 0x6200f2, 0, 0
};
#pragma section forcedata end
#pragma pop
