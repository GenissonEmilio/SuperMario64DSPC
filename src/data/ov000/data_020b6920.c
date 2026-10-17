/* .data 0x020b6920..0x020b6958 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b6920[20] = {
    115, 116, 95, 109, 97, 112, 95, 98, 95, 97, 108, 108,
    46, 98, 109, 100, 0, 0, 0, 0
};

unsigned char data_ov000_020b6934[36] = {
    100, 97, 116, 97, 47, 115, 112, 101, 99, 105, 97, 108,
    95, 111, 98, 106, 47, 114, 99, 95, 99, 97, 114, 112,
    101, 116, 47, 114, 99, 95, 99, 97, 114, 112, 101, 116
};
#pragma section forcedata end
#pragma pop
