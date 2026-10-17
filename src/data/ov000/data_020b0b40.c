/* .data 0x020b0b40..0x020b0b64 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b0b40[36] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 115,
    112, 105, 100, 101, 114, 47, 115, 112, 105, 100, 101, 114,
    95, 119, 97, 108, 107, 46, 98, 99, 97, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
