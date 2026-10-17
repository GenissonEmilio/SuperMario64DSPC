/* .data 0x020abb18..0x020abb34 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020abb18[28] = {
    77, 71, 47, 100, 95, 50, 100, 95, 109, 115, 103, 95,
    113, 117, 105, 116, 95, 73, 95, 110, 99, 103, 46, 98,
    105, 110, 0, 0
};
#pragma section forcedata end
#pragma pop
