/* .data 0x020bd020..0x020bd05c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020bd020[60] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 112,
    114, 111, 112, 101, 108, 108, 101, 114, 95, 104, 101, 121,
    104, 111, 47, 112, 114, 111, 112, 101, 108, 108, 101, 114,
    95, 104, 101, 121, 104, 111, 95, 102, 105, 114, 101, 95,
    97, 116, 116, 97, 99, 107, 46, 98, 99, 97, 0, 0
};
#pragma section forcedata end
#pragma pop
