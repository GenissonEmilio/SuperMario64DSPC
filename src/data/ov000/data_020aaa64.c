/* .data 0x020aaa64..0x020aaa7c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aaa64[24] = {
    77, 71, 47, 102, 97, 99, 101, 95, 115, 117, 114, 112,
    114, 105, 115, 101, 100, 46, 98, 99, 97, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
