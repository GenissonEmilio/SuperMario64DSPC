/* .data 0x020aadf4..0x020aae0c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aadf4[24] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    101, 100, 95, 119, 97, 118, 101, 46, 98, 99, 97, 0
};
#pragma section forcedata end
#pragma pop
