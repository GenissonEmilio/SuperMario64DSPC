/* .data 0x020bacec..0x020bad10 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020bacec[36] = {
    100, 97, 116, 97, 47, 115, 112, 101, 99, 105, 97, 108,
    95, 111, 98, 106, 47, 99, 50, 95, 104, 97, 114, 105,
    95, 108, 111, 110, 103, 47, 99, 50, 95, 104, 97, 114
};
#pragma section forcedata end
#pragma pop
