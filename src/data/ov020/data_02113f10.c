/* .data 0x02113f10..0x02113f4c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov020_02113f10[16] = {
    49, 1, 188, 2, 164, 6, 32, 3, 0, 0, 0, 0,
    0, 0, 0, 255
};

unsigned char data_ov020_02113f20[44] = {
    151, 0, 20, 5, 108, 7, 162, 254, 0, 0, 0, 192,
    0, 0, 6, 0, 30, 0, 213, 1, 158, 7, 112, 253,
    0, 0, 0, 0, 0, 0, 6, 255, 42, 0, 208, 7,
    8, 7, 182, 3, 0, 0, 0, 192
};
#pragma section forcedata end
#pragma pop
