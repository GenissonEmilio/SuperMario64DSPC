/* .data 0x020b0a20..0x020b0a44 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b0a20[36] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 107,
    105, 108, 108, 101, 114, 47, 107, 105, 108, 108, 101, 114,
    95, 102, 97, 99, 101, 46, 98, 109, 100, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
