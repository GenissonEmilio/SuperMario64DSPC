/* .data 0x0210b560..0x0210b584 */
extern unsigned char daMugenBGM_c_classInit[];
extern unsigned char _ZTI12daMugenBGM_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_MUGEN_BGM[9] = {
    (unsigned int)&daMugenBGM_c_classInit, 0x15f015f, 0, 0, 0, 0, 0, 0,
    (unsigned int)&_ZTI12daMugenBGM_c
};
#pragma section forcedata end
#pragma pop
