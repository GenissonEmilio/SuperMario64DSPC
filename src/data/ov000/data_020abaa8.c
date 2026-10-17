/* .data 0x020abaa8..0x020abac0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020abaa8[24] = {
    77, 71, 47, 100, 95, 50, 100, 95, 109, 115, 103, 95,
    103, 111, 97, 108, 95, 70, 95, 110, 99, 103, 46, 98
};
#pragma section forcedata end
#pragma pop
