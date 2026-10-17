/* .data 0x020aaa94..0x020aaaac */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aaa94[24] = {
    77, 71, 47, 109, 103, 95, 112, 95, 104, 101, 121, 104,
    111, 95, 119, 97, 105, 116, 46, 98, 99, 97, 0, 0
};
#pragma section forcedata end
#pragma pop
