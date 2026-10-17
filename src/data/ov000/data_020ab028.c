/* .data 0x020ab028..0x020ab044 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ab028[28] = {
    100, 97, 116, 97, 47, 119, 105, 112, 101, 47, 119, 105,
    112, 101, 95, 121, 111, 115, 104, 105, 46, 98, 109, 100,
    0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
