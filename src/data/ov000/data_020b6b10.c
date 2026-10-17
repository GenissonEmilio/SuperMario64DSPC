/* .data 0x020b6b10..0x020b6b38 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b6b10[8] = {
    46, 98, 109, 100, 0, 0, 0, 0
};

unsigned char data_ov000_020b6b18[32] = {
    100, 97, 116, 97, 47, 115, 112, 101, 99, 105, 97, 108,
    95, 111, 98, 106, 47, 114, 99, 95, 116, 105, 107, 117,
    119, 97, 47, 114, 99, 95, 116, 105
};
#pragma section forcedata end
#pragma pop
