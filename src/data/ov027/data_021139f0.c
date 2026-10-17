/* .data 0x021139f0..0x02113a1c */
extern unsigned char daPgDfdr_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char _ZTS10daPgDfdr_c[4] = {
    49, 48, 100, 97
};

extern unsigned char data_ov027_021139f4[12] ;

unsigned int g_profile_PENGUIN_DEFENDER[7] = {
    (unsigned int)&daPgDfdr_c_classInit, 0x740102, 0x800002, 0xa0000, 0x9c4000, 0x1000000, 0x1000000
};
#pragma section forcedata end
#pragma pop
