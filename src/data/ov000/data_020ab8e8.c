/* .data 0x020ab8e8..0x020ab904 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ab8e8[8] = {
    100, 97, 116, 97, 47, 112, 108, 97
};

unsigned char data_ov000_020ab8f0[20] = {
    121, 101, 114, 47, 115, 119, 105, 109, 95, 119, 97, 105,
    116, 46, 98, 99, 97, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
