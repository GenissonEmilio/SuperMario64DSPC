/* .data 0x020b0ccc..0x020b0cf0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b0ccc[36] = {
    77, 71, 47, 100, 95, 50, 100, 95, 109, 103, 95, 98,
    103, 95, 104, 97, 110, 97, 95, 115, 97, 103, 97, 115,
    101, 50, 95, 110, 115, 99, 46, 98, 105, 110, 0, 0
};
#pragma section forcedata end
#pragma pop
