/* .data 0x020b6800..0x020b682c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b6800[44] = {
    100, 97, 116, 97, 47, 115, 116, 97, 103, 101, 47, 119,
    97, 116, 101, 114, 95, 99, 105, 116, 121, 47, 119, 97,
    116, 101, 114, 95, 99, 105, 116, 121, 95, 105, 99, 103,
    46, 98, 105, 110, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
