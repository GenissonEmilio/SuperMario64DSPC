/* .data 0x02113cec..0x02113d70 */
extern unsigned char data_ov021_021137d0[];
extern unsigned char data_ov021_021137a8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov021_02113cec[2] = {
    0xaf00000, (unsigned int)&data_ov021_021137d0
};

unsigned int data_ov021_02113cf4[5] = {
    0, 0xf2040000U, (unsigned int)&data_ov021_021137a8, 0, 0xf3940000U
};

unsigned char data_ov021_02113d08[40] = {
    37, 226, 134, 11, 200, 0, 244, 1, 37, 226, 240, 10,
    200, 0, 244, 1, 37, 226, 90, 10, 200, 0, 244, 1,
    37, 226, 196, 9, 200, 0, 244, 1, 37, 226, 46, 9,
    200, 0, 244, 1
};

unsigned char data_ov021_02113d30[64] = {
    39, 2, 160, 15, 24, 252, 16, 245, 39, 2, 166, 14,
    24, 252, 146, 240, 39, 2, 234, 11, 150, 252, 96, 240,
    39, 2, 202, 8, 124, 252, 96, 240, 39, 2, 58, 7,
    174, 252, 108, 238, 39, 2, 58, 7, 118, 253, 108, 238,
    39, 2, 58, 7, 62, 254, 108, 238, 14, 255, 125, 16,
    24, 252, 63, 249
};
#pragma section forcedata end
#pragma pop
