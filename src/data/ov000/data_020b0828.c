/* .data 0x020b0828..0x020b0840 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b0828[24] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    87, 95, 116, 120, 95, 100, 97, 109, 97, 103, 101, 95
};
#pragma section forcedata end
#pragma pop
