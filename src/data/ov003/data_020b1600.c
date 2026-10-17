/* .data 0x020b1600..0x020b1610 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov003_020b1600[16] = {
    66, 97, 116, 116, 97, 110, 32, 75, 105, 110, 103, 32,
    77, 97, 112, 0
};
#pragma section forcedata end
#pragma pop
