/* .data 0x020abc4c..0x020abc68 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020abc4c[28] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 112,
    105, 97, 110, 111, 47, 112, 105, 97, 110, 111, 46, 107,
    99, 108, 0, 0
};
#pragma section forcedata end
#pragma pop
