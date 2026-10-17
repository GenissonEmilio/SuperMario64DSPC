/* .data 0x020ab760..0x020ab77c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ab760[28] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    100, 114, 111, 119, 110, 95, 100, 105, 101, 46, 98, 99,
    97, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
