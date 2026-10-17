/* .data 0x02113ccc..0x02113cec */
extern unsigned char daObjRc_Tikuwa_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov036_02113ccc[8] ;

unsigned int g_profile_RC_TIKUWA[6] = {
    (unsigned int)&daObjRc_Tikuwa_c_classInit, 0x100007e, 0x2000006, 0x4b000, 0x1f4000, 0x1f40000
};
#pragma section forcedata end
#pragma pop
