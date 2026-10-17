/* .data 0x0211488c..0x021148b4 */
extern unsigned char daBook_c_classInit_BOOK_SWITCH[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov020_0211488c[12] ;

unsigned int g_profile_BOOK_SWITCH[7] = {
    (unsigned int)&daBook_c_classInit_BOOK_SWITCH, 0x3600d5, 2, 0x64000, 0x64000, 0x1000000, 0x1000000
};
#pragma section forcedata end
#pragma pop
