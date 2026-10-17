/* .data 0x02112ac0..0x02112adc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov036_02112ac0[8] = {
    255, 255, 255, 255, 255, 255, 255, 255
};

unsigned char data_ov036_02112ac8[20] = {
    67, 76, 80, 83, 8, 0, 2, 0, 192, 15, 0, 1,
    255, 0, 0, 0, 196, 15, 0, 1
};
#pragma section forcedata end
#pragma pop
