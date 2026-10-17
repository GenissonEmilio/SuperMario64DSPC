/* .data 0x020ab124..0x020ab140 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ab124[28] = {
    77, 71, 47, 100, 95, 50, 100, 95, 109, 103, 95, 108,
    117, 105, 103, 105, 95, 110, 99, 108, 46, 98, 105, 110,
    0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
