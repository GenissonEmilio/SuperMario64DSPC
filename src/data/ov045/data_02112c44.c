/* .data 0x02112c44..0x02112ca8 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov045_02112c44[8] = {
    250, 0, 0, 255, 0, 0, 0, 0
};

unsigned char data_ov045_02112c4c[12] = {
    0, 0, 255, 255, 10, 1, 178, 243, 172, 13, 107, 253
};

unsigned char data_ov045_02112c58[16] = {
    0, 0, 0, 0, 0, 0, 255, 255, 10, 1, 186, 250,
    172, 13, 111, 253
};

unsigned char data_ov045_02112c68[32] = {
    0, 0, 0, 0, 0, 0, 255, 255, 20, 0, 82, 28,
    204, 247, 50, 0, 3, 0, 171, 234, 0, 0, 255, 255,
    44, 0, 96, 9, 5, 20, 200, 0
};

unsigned char data_ov045_02112c88[32] = {
    0, 0, 0, 0, 0, 0, 2, 60, 143, 0, 0, 0,
    72, 244, 48, 248, 0, 0, 0, 0, 0, 0, 255, 255,
    31, 0, 96, 9, 255, 20, 156, 255
};
#pragma section forcedata end
#pragma pop
