/* .data 0x020ab904..0x020ab938 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ab904[4] = {
    77, 71, 47, 100
};

unsigned char data_ov000_020ab908[24] = {
    95, 50, 100, 95, 116, 104, 117, 109, 95, 99, 111, 105,
    110, 95, 110, 99, 103, 46, 98, 105, 110, 0, 0, 0
};

unsigned char data_ov000_020ab920[24] = {
    77, 71, 47, 108, 117, 105, 103, 105, 95, 100, 95, 100,
    101, 97, 108, 95, 115, 116, 97, 114, 116, 46, 98, 99
};
#pragma section forcedata end
#pragma pop
