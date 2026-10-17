/* .data 0x02113ccc..0x02113cec */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov015_02113ccc[8] = {
    124, 1, 124, 252, 39, 2, 160, 246
};

unsigned char data_ov015_02113cd4[24] = {
    124, 1, 230, 251, 38, 130, 253, 12, 171, 11, 61, 250,
    38, 130, 249, 247, 38, 2, 137, 238, 38, 130, 145, 14
};
#pragma section forcedata end
#pragma pop
