/* .data 0x020b1f80..0x020b1fa4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b1f80[36] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 98,
    111, 109, 98, 104, 101, 105, 47, 98, 111, 109, 98, 104,
    101, 105, 95, 119, 97, 108, 107, 46, 98, 99, 97, 0
};
#pragma section forcedata end
#pragma pop
