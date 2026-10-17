/* .data 0x020b1104..0x020b1128 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b1104[36] = {
    100, 97, 116, 97, 47, 50, 68, 95, 99, 97, 100, 47,
    100, 95, 50, 100, 95, 111, 112, 95, 111, 98, 106, 95,
    99, 108, 95, 110, 99, 103, 46, 98, 105, 110, 0, 0
};
#pragma section forcedata end
#pragma pop
