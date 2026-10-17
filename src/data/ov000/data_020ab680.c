/* .data 0x020ab680..0x020ab69c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ab680[28] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    87, 95, 107, 101, 121, 95, 103, 101, 116, 46, 98, 99,
    97, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
