/* .data 0x020af10c..0x020af12c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020af10c[32] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    87, 95, 111, 112, 95, 108, 111, 111, 107, 95, 108, 117,
    105, 103, 105, 46, 98, 99, 97, 0
};
#pragma section forcedata end
#pragma pop
