/* .data 0x02114874..0x0211488c */
extern unsigned char daBookGen_c_classInit[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov020_02114874[8] ;

unsigned int g_profile_BOOK_GENERATOR[4] = {
    (unsigned int)&daBookGen_c_classInit, 0x1490148, 1, 0x64000
};
#pragma section forcedata end
#pragma pop
