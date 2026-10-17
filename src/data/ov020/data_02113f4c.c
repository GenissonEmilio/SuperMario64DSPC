/* .data 0x02113f4c..0x02113ff4 */
extern unsigned char data_ov020_0211378c[];
extern unsigned char data_ov020_0211379c[];
extern unsigned char data_ov020_021137bc[];
extern unsigned char data_ov020_021138cc[];
extern unsigned char data_ov020_021137a4[];
extern unsigned char data_ov020_021137c4[];
extern unsigned char data_ov020_021137ac[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov020_02113f4c[20] = {
    0, 0, 34, 15, 67, 0, 55, 3, 214, 6, 62, 255,
    0, 0, 0, 192, 0, 0, 0, 255
};

unsigned char data_ov020_02113f60[24] = {
    0, 0, 132, 3, 220, 5, 168, 22, 0, 0, 0, 128,
    0, 0, 0, 5, 0, 0, 188, 2, 220, 5, 224, 21
};

unsigned char data_ov020_02113f78[56] = {
    0, 0, 0, 128, 0, 0, 0, 5, 0, 0, 244, 1,
    220, 5, 168, 22, 0, 0, 0, 128, 0, 0, 0, 5,
    0, 0, 188, 2, 220, 5, 112, 23, 0, 0, 0, 128,
    0, 0, 0, 5, 0, 0, 208, 7, 108, 7, 182, 3,
    0, 0, 0, 192, 0, 0, 156, 5
};

unsigned int data_ov020_02113fb0[17] = {
    (unsigned int)&data_ov020_0211378c, 0, 0x10cc0000, (unsigned int)&data_ov020_0211379c, 0, 0x6400101, (unsigned int)&data_ov020_021137bc, (unsigned int)&data_ov020_021138cc,
    0xc8b0104, (unsigned int)&data_ov020_021137a4, 0, 0x6400101, (unsigned int)&data_ov020_021137c4, 0, 0x2bc0103, (unsigned int)&data_ov020_021137ac,
    0
};
#pragma section forcedata end
#pragma pop
