/* .data 0x020abcbc..0x020abcd8 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020abcbc[28] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 112,
    111, 112, 111, 105, 47, 112, 111, 112, 111, 105, 46, 98,
    109, 100, 0, 0
};
#pragma section forcedata end
#pragma pop
