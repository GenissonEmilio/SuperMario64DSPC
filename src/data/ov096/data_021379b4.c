/* .data 0x021379b4..0x021379d8 */
extern unsigned char daSanbo_c_classInit_SANBO_BODY[];
extern unsigned char _ZTI9daSanbo_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_SANBO_BODY[9] = {
    (unsigned int)&daSanbo_c_classInit_SANBO_BODY, 0x6000f1, 0x10000002, 0x1f4000, 0x1f4000, 0x1000000, 0x1000000, 0,
    (unsigned int)&_ZTI9daSanbo_c
};
#pragma section forcedata end
#pragma pop
