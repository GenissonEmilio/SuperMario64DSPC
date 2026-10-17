/* .data 0x020aaff0..0x020ab00c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aaff0[28] = {
    100, 97, 116, 97, 47, 119, 105, 112, 101, 47, 119, 105,
    112, 101, 95, 107, 111, 111, 112, 97, 46, 98, 109, 100,
    0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
