/* .data 0x020aca30..0x020aca4c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aca30[28] = {
    77, 71, 47, 100, 95, 50, 100, 95, 109, 103, 95, 99,
    111, 109, 109, 111, 110, 95, 71, 95, 110, 99, 103, 46,
    98, 105, 110, 0
};
#pragma section forcedata end
#pragma pop
