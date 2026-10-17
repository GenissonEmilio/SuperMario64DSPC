/* .data 0x02111a40..0x02111a74 */
extern unsigned char data_ov047_02111cd4[];
extern unsigned char data_ov047_021119e0[];
extern unsigned char data_ov047_02111a14[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov047_02111a4c[12] = {
    14, 6, 88, 27, 244, 232, 14, 6, 88, 27, 82, 234
};

unsigned char data_ov047_02111a40[12] = {
    167, 10, 222, 8, 141, 252, 76, 248, 222, 8, 141, 252
};

unsigned int data_ov047_02111a58[7] = {
    (unsigned int)&data_ov047_02111cd4, (unsigned int)&data_ov047_021119e0, 0x78a0792, 0x7940793, (unsigned int)&data_ov047_02111a14, 0x6400001, 191
};
#pragma section forcedata end
#pragma pop
