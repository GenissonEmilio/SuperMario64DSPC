/* .data 0x020ab060..0x020ab07c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ab060[28] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    115, 119, 105, 109, 95, 100, 105, 101, 46, 98, 99, 97,
    0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
