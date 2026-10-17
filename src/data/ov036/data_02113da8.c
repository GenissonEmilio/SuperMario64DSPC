/* .data 0x02113da8..0x02113dc4 */
extern unsigned char daObjRc_Guruguru_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_RC_GURUGURU[7] = {
    (unsigned int)&daObjRc_Guruguru_c_classInit, 0x1060084, 2, 0, 0x800000, 0x2000000, 0
};
#pragma section forcedata end
#pragma pop
