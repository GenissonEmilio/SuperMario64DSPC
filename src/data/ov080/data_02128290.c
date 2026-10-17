/* .data 0x02128290..0x021282b4 */
extern unsigned char daPicGate_c_classInit[];
extern unsigned char _ZTI11daPicGate_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_PICTURE_GATE[9] = {
    (unsigned int)&daPicGate_c_classInit, 0x1300133, 3, 0x1000, 0x1000, 0x1000000, 0x1000, 0,
    (unsigned int)&_ZTI11daPicGate_c
};
#pragma section forcedata end
#pragma pop
