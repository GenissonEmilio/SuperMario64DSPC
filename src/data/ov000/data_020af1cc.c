/* .data 0x020af1cc..0x020af1ec */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020af1cc[32] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 100,
    111, 115, 115, 121, 47, 100, 111, 115, 115, 121, 95, 98,
    111, 100, 121, 46, 107, 99, 108, 0
};
#pragma section forcedata end
#pragma pop
