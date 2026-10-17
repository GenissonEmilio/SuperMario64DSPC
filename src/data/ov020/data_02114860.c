/* .data 0x02114860..0x02114874 */
extern unsigned char daBook_c_classInit_KILLER_BOOK[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_KILLER_BOOK[5] = {
    (unsigned int)&daBook_c_classInit_KILLER_BOOK, 0x1480147, 0x10000002, 0x64000, 0x64000
};
#pragma section forcedata end
#pragma pop
