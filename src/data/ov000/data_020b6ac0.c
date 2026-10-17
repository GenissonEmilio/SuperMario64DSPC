/* .data 0x020b6ac0..0x020b6b10 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b6ac0[8] = {
    100, 97, 116, 97, 47, 115, 112, 101
};

unsigned char data_ov000_020b6ac8[36] = {
    99, 105, 97, 108, 95, 111, 98, 106, 47, 114, 99, 95,
    114, 105, 102, 116, 48, 50, 47, 114, 99, 95, 114, 105,
    102, 116, 48, 50, 46, 107, 99, 108, 0, 0, 0, 0
};

unsigned char data_ov000_020b6aec[36] = {
    100, 97, 116, 97, 47, 115, 112, 101, 99, 105, 97, 108,
    95, 111, 98, 106, 47, 114, 99, 95, 116, 105, 107, 117,
    119, 97, 47, 114, 99, 95, 116, 105, 107, 117, 119, 97
};
#pragma section forcedata end
#pragma pop
