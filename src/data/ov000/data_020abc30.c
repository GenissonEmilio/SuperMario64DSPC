/* .data 0x020abc30..0x020abc4c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020abc30[28] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    115, 100, 114, 111, 112, 95, 119, 97, 105, 116, 46, 98,
    99, 97, 0, 0
};
#pragma section forcedata end
#pragma pop
