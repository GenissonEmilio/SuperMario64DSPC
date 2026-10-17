/* .data 0x02113b08..0x02113b2c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov021_02113b08[8] = {
    20, 0, 160, 240, 60, 246, 30, 229
};

unsigned char data_ov021_02113b10[28] = {
    255, 0, 0, 0, 0, 0, 40, 11, 1, 1, 134, 242,
    164, 237, 172, 13, 0, 0, 0, 0, 0, 0, 1, 255,
    15, 0, 214, 236
};
#pragma section forcedata end
#pragma pop
