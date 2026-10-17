/* .data 0x020aa7f8..0x020aa80c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aa7f8[20] = {
    77, 71, 47, 108, 117, 105, 103, 105, 95, 100, 95, 108,
    111, 115, 101, 46, 98, 99, 97, 0
};
#pragma section forcedata end
#pragma pop
