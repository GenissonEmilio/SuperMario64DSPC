/* .data 0x02113ccc..0x02113cec */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov016_02113ccc[8] = {
    67, 76, 80, 83, 8, 0, 1, 0
};

unsigned char data_ov016_02113cd4[24] = {
    196, 15, 0, 0, 255, 0, 0, 0, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
