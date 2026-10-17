/* .data 0x020bad10..0x020bad1c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020bad10[12] = {
    105, 95, 108, 111, 110, 103, 46, 98, 109, 100, 0, 0
};
#pragma section forcedata end
#pragma pop
