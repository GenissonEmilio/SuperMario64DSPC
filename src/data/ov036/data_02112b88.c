/* .data 0x02112b88..0x02112bc8 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov036_02112b88[32] = {
    67, 76, 80, 83, 8, 0, 2, 0, 192, 15, 0, 0,
    255, 0, 0, 0, 192, 79, 0, 0, 255, 0, 0, 0,
    255, 255, 255, 255, 255, 255, 255, 255
};

unsigned char data_ov036_02112ba8[32] = {
    67, 76, 80, 83, 8, 0, 1, 0, 192, 15, 0, 1,
    255, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
