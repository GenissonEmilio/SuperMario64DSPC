/* .data 0x020abca0..0x020abcb4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020abca0[20] = {
    77, 71, 47, 100, 95, 50, 100, 95, 109, 115, 103, 95,
    108, 111, 118, 101, 95, 73, 95, 110
};
#pragma section forcedata end
#pragma pop
