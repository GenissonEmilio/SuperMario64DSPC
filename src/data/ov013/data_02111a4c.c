/* .data 0x02111a4c..0x02111abc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov013_02111a4c[12] = {
    251, 4, 213, 239, 0, 0, 0, 0, 21, 0, 4, 85
};

unsigned char data_ov013_02111a58[32] = {
    109, 253, 20, 5, 236, 254, 0, 0, 0, 128, 22, 0,
    5, 34, 127, 13, 220, 5, 87, 239, 0, 0, 0, 0,
    19, 0, 6, 68, 181, 237, 35, 5
};

unsigned char data_ov013_02111a78[68] = {
    215, 251, 0, 0, 0, 128, 25, 0, 7, 51, 56, 255,
    90, 10, 246, 11, 0, 0, 0, 128, 27, 0, 8, 68,
    31, 255, 152, 18, 251, 227, 0, 192, 0, 0, 39, 0,
    9, 17, 180, 251, 244, 1, 74, 252, 0, 0, 0, 128,
    2, 11, 255, 32, 234, 242, 240, 10, 58, 7, 0, 192,
    0, 0, 28, 0, 10, 17, 116, 11
};
#pragma section forcedata end
#pragma pop
