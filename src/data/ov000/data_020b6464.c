/* .data 0x020b6464..0x020b6490 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b6464[8] = {
    77, 71, 47, 100, 95, 50, 100, 95
};

unsigned char data_ov000_020b646c[36] = {
    109, 103, 95, 98, 103, 95, 115, 109, 97, 114, 116, 95,
    98, 97, 108, 108, 95, 108, 97, 121, 48, 48, 95, 49,
    95, 110, 115, 99, 46, 98, 105, 110, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
