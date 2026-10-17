/* .data 0x02112c44..0x02112c4c */
extern unsigned char daObjC1Peach_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_C1_PEACH[2] = {
    (unsigned int)&daObjC1Peach_c_classInit, 0x1450026
};
#pragma section forcedata end
#pragma pop
