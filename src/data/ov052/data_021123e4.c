/* .data 0x021123e4..0x0211241c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov052_021123f4[16] = {
    5, 0, 187, 6, 248, 17, 172, 244, 0, 0, 0, 0,
    0, 0, 40, 255
};

unsigned char data_ov052_021123e4[16] = {
    6, 0, 98, 233, 160, 15, 128, 243, 0, 0, 0, 64,
    0, 0, 7, 0
};

unsigned char data_ov052_02112404[24] = {
    5, 0, 87, 10, 248, 17, 172, 244, 170, 42, 0, 0,
    0, 0, 40, 255, 5, 0, 243, 13, 248, 17, 172, 244
};
#pragma section forcedata end
#pragma pop
