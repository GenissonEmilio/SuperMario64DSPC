/* .data 0x021123e4..0x02112404 */
extern unsigned char daObjC0Water_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_C0_WATER[4] = {
    (unsigned int)&daObjC0Water_c_classInit, 0xe50023, 0, 0
};

extern unsigned char data_ov012_021123f4[16] ;
#pragma section forcedata end
#pragma pop
