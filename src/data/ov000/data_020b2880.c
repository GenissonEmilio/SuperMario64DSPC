/* .data 0x020b2880..0x020b288c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b2880[12] = {
    95, 97, 108, 108, 46, 98, 109, 100, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
