/* .data 0x0213ebd0..0x0213ebd8 */
extern unsigned char dScMgSmartball_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MG_SMARTBALL[2] = {
    (unsigned int)&dScMgSmartball_c_classInit, 0x1780178
};
#pragma section forcedata end
#pragma pop
