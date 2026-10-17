/* .data 0x02112f28..0x02112f74 */
extern unsigned char data_ov026_0211249c[];
extern unsigned char data_ov026_021124a0[];
extern unsigned char data_ov026_02112738[];
extern unsigned char data_ov026_0211251c[];
extern unsigned char data_ov026_021124a4[];
extern unsigned char data_ov026_02112490[];
extern unsigned char data_ov026_02112554[];
extern unsigned char data_ov026_021124e4[];
extern unsigned char data_ov026_02113100[];
extern unsigned char data_ov026_02112dc8[];
extern unsigned char data_ov026_02112f10[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov026_02112f28[4] = {
    91, 0, 0, 0
};

unsigned int data_ov026_02112f2c[5] = {
    (unsigned int)&data_ov026_0211249c, (unsigned int)&data_ov026_021124a0, (unsigned int)&data_ov026_02112738, 2, (unsigned int)&data_ov026_0211251c
};

unsigned int data_ov026_02112f40[6] = {
    30, (unsigned int)&data_ov026_021124a4, (unsigned int)&data_ov026_02112490, (unsigned int)&data_ov026_02112554, 2, (unsigned int)&data_ov026_021124e4
};

unsigned int data_ov026_02112f58[7] = {
    (unsigned int)&data_ov026_02113100, (unsigned int)&data_ov026_02112dc8, 0x7f307f5, 0x7f707f6, (unsigned int)&data_ov026_02112f10, 0x8980002, 31
};
#pragma section forcedata end
#pragma pop
