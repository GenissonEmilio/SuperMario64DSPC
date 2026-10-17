/* .data 0x020abbb4..0x020abbdc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020abbb4[12] = {
    95, 71, 95, 110, 99, 103, 46, 98, 105, 110, 0, 0
};

unsigned char data_ov000_020abbc0[28] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 99,
    104, 97, 105, 114, 47, 99, 104, 97, 105, 114, 46, 98,
    109, 100, 0, 0
};
#pragma section forcedata end
#pragma pop
