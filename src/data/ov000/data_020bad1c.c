/* .data 0x020bad1c..0x020bad4c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020bad1c[48] = {
    100, 97, 116, 97, 47, 115, 112, 101, 99, 105, 97, 108,
    95, 111, 98, 106, 47, 99, 118, 95, 103, 111, 114, 111,
    95, 114, 111, 99, 107, 47, 99, 118, 95, 103, 111, 114,
    111, 95, 114, 111, 99, 107, 46, 98, 109, 100, 0, 0
};
#pragma section forcedata end
#pragma pop
