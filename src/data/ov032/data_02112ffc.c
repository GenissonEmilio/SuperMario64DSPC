/* .data 0x02112ffc..0x021130c8 */
extern unsigned char data_ov032_0211346c[];
extern unsigned char data_ov032_0211336c[];
extern unsigned char data_ov032_02112fd8[];
extern unsigned char data_ov032_02112ef4[];
extern unsigned char data_ov032_02112f04[];
extern unsigned char data_ov032_02112f14[];
extern unsigned char data_ov032_02112f24[];
extern unsigned char data_ov032_021131c8[];
extern unsigned char data_ov032_02112f4c[];
extern unsigned char data_ov032_021130c8[];
extern unsigned char data_ov032_02112ec4[];
extern unsigned char data_ov032_02113148[];
extern unsigned char data_ov032_02112ec0[];
extern unsigned char data_ov032_02112ec8[];
extern unsigned char data_ov032_02113080[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov032_02112ffc[12] = {
    54, 247, 132, 3, 0, 0, 0, 0, 0, 0, 255, 255
};

unsigned int data_ov032_02113008[14] = {
    0x3100, (unsigned int)&data_ov032_0211346c, 0x2005, (unsigned int)&data_ov032_0211336c, 864, (unsigned int)&data_ov032_02112fd8, 384, (unsigned int)&data_ov032_02112ef4,
    416, (unsigned int)&data_ov032_02112f04, 448, (unsigned int)&data_ov032_02112f14, 480, (unsigned int)&data_ov032_02112f24
};

unsigned int data_ov032_02113040[16] = {
    0x1b02, (unsigned int)&data_ov032_021131c8, 0x403, (unsigned int)&data_ov032_02112f4c, 0x904, (unsigned int)&data_ov032_021130c8, 267, (unsigned int)&data_ov032_02112ec4,
    0x801, (unsigned int)&data_ov032_02113148, 268, (unsigned int)&data_ov032_02112ec0, 270, (unsigned int)&data_ov032_02112ec8, 0x50a, (unsigned int)&data_ov032_02113080
};

unsigned char data_ov032_02113080[72] = {
    144, 1, 12, 254, 32, 3, 0, 0, 0, 0, 26, 0,
    255, 17, 0, 0, 116, 14, 140, 250, 0, 192, 0, 0,
    26, 4, 255, 17, 188, 233, 98, 248, 138, 233, 0, 192,
    0, 0, 25, 4, 255, 0, 228, 243, 38, 2, 190, 241,
    0, 192, 0, 0, 25, 5, 255, 0, 0, 25, 86, 250,
    238, 233, 0, 192, 0, 0, 25, 6, 255, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
