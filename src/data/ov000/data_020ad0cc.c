/* .data 0x020ad0cc..0x020ad0ec */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ad0cc[32] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    87, 95, 101, 100, 95, 99, 97, 112, 95, 111, 102, 102,
    46, 98, 99, 97, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
