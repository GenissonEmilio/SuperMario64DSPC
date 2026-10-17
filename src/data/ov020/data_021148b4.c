/* .data 0x021148b4..0x021148d8 */
extern unsigned char daBook_c_classInit_SHOOT_BOOK[];
extern unsigned char _ZTI11daBookGen_c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int g_profile_SHOOT_BOOK[1] = {
    (unsigned int)&daBook_c_classInit_SHOOT_BOOK
};

unsigned int data_ov020_021148b8[8] = {
    0x1470145, 2, 0x64000, 0x64000, 0x1000000, 0x1000000, 0, (unsigned int)&_ZTI11daBookGen_c
};
#pragma section forcedata end
#pragma pop
