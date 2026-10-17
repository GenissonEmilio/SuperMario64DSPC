/* .data 0x020af5ac..0x020af5cc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020af5ac[32] = {
    100, 97, 116, 97, 47, 115, 116, 97, 103, 101, 47, 99,
    97, 118, 101, 47, 99, 97, 118, 101, 95, 48, 48, 95,
    105, 115, 99, 46, 98, 105, 110, 0
};
#pragma section forcedata end
#pragma pop
