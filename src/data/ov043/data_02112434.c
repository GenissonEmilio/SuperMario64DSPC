/* .data 0x02112434..0x0211244c */
extern unsigned char daObjKm1_Kuruma_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov043_02112434[4] ;

unsigned int g_profile_KM1_KURUMA[5] = {
    (unsigned int)&daObjKm1_Kuruma_c_classInit, 0xb10088, 2, 0, 0x200000
};
#pragma section forcedata end
#pragma pop
