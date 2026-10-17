/* .data 0x02113cec..0x02113d30 */
extern unsigned char data_ov020_0211382c[];
extern unsigned char data_ov020_021137f0[];
extern unsigned char data_ov020_02113784[];
extern unsigned char data_ov020_02114184[];
extern unsigned char data_ov020_021137e4[];
extern unsigned char data_ov020_02113f60[];
extern unsigned char data_ov020_021142ac[];
extern unsigned char data_ov020_021137d8[];
extern unsigned char data_ov020_02113780[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov020_02113cf0[4] = {
    2, 2, 0, 0
};

unsigned int data_ov020_02113cec[1] = {
    (unsigned int)&data_ov020_0211382c
};

unsigned int data_ov020_02113cf4[15] = {
    (unsigned int)&data_ov020_021137f0, 259, (unsigned int)&data_ov020_02113784, 0x1504, (unsigned int)&data_ov020_02114184, 0x50b, (unsigned int)&data_ov020_021137e4, 0x501,
    (unsigned int)&data_ov020_02113f60, 0x1909, (unsigned int)&data_ov020_021142ac, 0x50c, (unsigned int)&data_ov020_021137d8, 270, (unsigned int)&data_ov020_02113780
};
#pragma section forcedata end
#pragma pop
