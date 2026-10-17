/* .data 0x021343c8..0x021343ec */
extern unsigned char daShark_c_classInit[];
extern unsigned char _ZTI9daShark_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_SHARK[9] = {
    (unsigned int)&daShark_c_classInit, 0x4f00e1, 3, 0x64000, 0x258000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI9daShark_c
};
#pragma section forcedata end
#pragma pop
