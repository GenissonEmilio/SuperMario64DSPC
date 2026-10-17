/* .data 0x020b1368..0x020b1380 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b1368[24] = {
    100, 97, 116, 97, 47, 110, 111, 114, 109, 97, 108, 95,
    111, 98, 106, 47, 102, 105, 115, 104, 47, 102, 105, 115
};
#pragma section forcedata end
#pragma pop
