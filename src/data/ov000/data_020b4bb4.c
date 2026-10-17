/* .data 0x020b4bb4..0x020b4bfc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b4bb4[16] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 98,
    111, 109, 98, 107
};

unsigned char data_ov000_020b4bc4[24] = {
    105, 110, 103, 47, 98, 111, 109, 98, 107, 105, 110, 103,
    95, 119, 97, 105, 116, 49, 46, 98, 99, 97, 0, 0
};

unsigned char data_ov000_020b4bdc[32] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 98,
    111, 109, 98, 107, 105, 110, 103, 47, 98, 111, 109, 98,
    107, 105, 110, 103, 95, 119, 97, 105
};
#pragma section forcedata end
#pragma pop
