/* .data 0x021124f8..0x02112520 */
extern unsigned char daObjEmmLog_c_classInit[];
extern unsigned char _ZTI13daObjEmmLog_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov052_021124f8[4] ;

unsigned int g_profile_EMM_LOG[9] = {
    (unsigned int)&daObjEmmLog_c_classInit, 0x1000ae, 2, 0xffb00000U, 0x600000, 0x4000000, 0, 0,
    (unsigned int)&_ZTI13daObjEmmLog_c
};
#pragma section forcedata end
#pragma pop
