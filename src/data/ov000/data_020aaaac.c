/* .data 0x020aaaac..0x020aaac4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aaaac[24] = {
    77, 71, 47, 108, 117, 105, 103, 105, 95, 100, 95, 119,
    105, 110, 95, 101, 110, 100, 46, 98, 99, 97, 0, 0
};
#pragma section forcedata end
#pragma pop
