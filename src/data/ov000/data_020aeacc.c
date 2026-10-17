/* .data 0x020aeacc..0x020aeaec */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aeacc[32] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 112,
    101, 97, 99, 104, 47, 112, 101, 97, 99, 104, 95, 108,
    111, 119, 46, 98, 109, 100, 0, 0
};
#pragma section forcedata end
#pragma pop
