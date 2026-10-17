/* .data 0x020aaa34..0x020aaa4c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aaa34[24] = {
    77, 71, 47, 100, 95, 50, 100, 95, 103, 114, 97, 100,
    101, 95, 110, 115, 99, 46, 98, 105, 110, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
