/* .data 0x020af4cc..0x020af4ec */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020af4cc[32] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 111,
    119, 108, 47, 111, 119, 108, 95, 102, 108, 121, 95, 102,
    114, 101, 101, 46, 98, 99, 97, 0
};
#pragma section forcedata end
#pragma pop
