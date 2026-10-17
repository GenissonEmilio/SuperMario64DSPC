/* .data 0x020aba00..0x020aba1c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aba00[28] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 100,
    111, 115, 115, 121, 47, 100, 111, 115, 115, 121, 46, 98,
    109, 100, 0, 0
};
#pragma section forcedata end
#pragma pop
