/* .data 0x02113a98..0x02113ab8 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov020_02113a98[8] = {
    150, 0, 44, 1, 120, 0, 224, 252
};

unsigned char data_ov020_02113aa0[24] = {
    0, 0, 0, 0, 0, 0, 255, 255, 8, 1, 12, 254,
    18, 1, 236, 250, 0, 0, 0, 32, 0, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
