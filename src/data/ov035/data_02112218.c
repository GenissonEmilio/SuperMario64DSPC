/* .data 0x02112218..0x02112278 */
extern unsigned char data_ov035_021124e4[];
extern unsigned char data_ov035_021123ec[];
extern unsigned char data_ov035_0211207c[];
extern unsigned char data_ov035_021122a8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov035_02112238[32] = {
    67, 76, 80, 83, 8, 0, 2, 0, 192, 15, 0, 1,
    255, 0, 0, 0, 192, 31, 0, 1, 255, 0, 0, 0,
    255, 255, 255, 255, 255, 255, 255, 255
};

unsigned int data_ov035_02112218[8] = {
    0x5a00, (unsigned int)&data_ov035_021124e4, 0x1f05, (unsigned int)&data_ov035_021123ec, 448, (unsigned int)&data_ov035_0211207c, 0x6e5, (unsigned int)&data_ov035_021122a8
};

unsigned char data_ov035_02112258[32] = {
    67, 76, 80, 83, 8, 0, 1, 0, 192, 15, 0, 0,
    255, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
