/* .data 0x02111b80..0x02111bc0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov043_02111b80[8] = {
    67, 76, 80, 83, 8, 0, 1, 0
};

unsigned char data_ov043_02111b88[24] = {
    192, 15, 0, 0, 255, 0, 0, 0, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255
};

unsigned char data_ov043_02111ba0[32] = {
    67, 76, 80, 83, 8, 0, 2, 0, 192, 15, 0, 0,
    255, 0, 0, 0, 192, 79, 0, 0, 255, 0, 0, 0,
    255, 255, 255, 255, 255, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
