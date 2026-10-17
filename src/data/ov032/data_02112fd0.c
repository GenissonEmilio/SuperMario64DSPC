/* .data 0x02112fd0..0x02112ffc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov032_02112fd0[8] = {
    255, 255, 255, 255, 255, 255, 255, 255
};

unsigned char data_ov032_02112fd8[36] = {
    26, 1, 138, 27, 36, 250, 250, 231, 0, 0, 0, 0,
    0, 0, 255, 255, 25, 1, 248, 248, 12, 254, 52, 8,
    3, 0, 0, 0, 0, 0, 241, 255, 239, 0, 56, 230
};
#pragma section forcedata end
#pragma pop
