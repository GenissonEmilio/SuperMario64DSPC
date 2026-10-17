/* .data 0x02148498..0x021484bc */
extern unsigned char daFish_c_classInit[];
extern unsigned char _ZTI8daFish_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_FISH[9] = {
    (unsigned int)&daFish_c_classInit, 0x1580158, 0x10002, 0, 0x1e000, 0x1000000, 0x4b0000, 0,
    (unsigned int)&_ZTI8daFish_c
};
#pragma section forcedata end
#pragma pop
