/* .data 0x02113c00..0x02113c20 */
extern unsigned char daObjRc_Hane_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char _ZTS14daObjRc_Hane_c[8] = {
    49, 52, 100, 97, 79, 98, 106, 82
};

unsigned char data_ov036_02113c08[12] = {
    99, 95, 72, 97, 110, 101, 95, 99, 0, 0, 0, 0
};

unsigned int g_profile_RC_HANE[3] = {
    (unsigned int)&daObjRc_Hane_c_classInit, 0xff007d, 2
};
#pragma section forcedata end
#pragma pop
