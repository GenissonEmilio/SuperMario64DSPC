/* .data 0x02112f74..0x02112fd0 */
extern unsigned char data_ov026_021132b0[];
extern unsigned char data_ov026_02113600[];
extern unsigned char data_ov026_02112e90[];
extern unsigned char data_ov026_02112ed0[];
extern unsigned char data_ov026_02112eb0[];
extern unsigned char data_ov026_02112ec0[];
extern unsigned char data_ov026_02112e60[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov026_02112f74[8] = {
    67, 76, 80, 83, 8, 0, 1, 0
};

unsigned char data_ov026_02112f7c[24] = {
    192, 15, 0, 0, 255, 0, 0, 0, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255
};

unsigned int data_ov026_02112f94[15] = {
    0x1a00, (unsigned int)&data_ov026_021132b0, 0x3805, (unsigned int)&data_ov026_02113600, 320, (unsigned int)&data_ov026_02112e90, 352, (unsigned int)&data_ov026_02112ed0,
    384, (unsigned int)&data_ov026_02112eb0, 416, (unsigned int)&data_ov026_02112ec0, 448, (unsigned int)&data_ov026_02112e60, 480
};
#pragma section forcedata end
#pragma pop
