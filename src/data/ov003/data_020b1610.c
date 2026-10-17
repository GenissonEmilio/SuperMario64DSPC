/* .data 0x020b1610..0x020b1620 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov003_020b1610[16] = {
    77, 97, 105, 110, 32, 67, 97, 115, 116, 108, 101, 32,
    77, 97, 112, 0
};
#pragma section forcedata end
#pragma pop
