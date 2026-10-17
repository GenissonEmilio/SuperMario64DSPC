/* .data 0x02113a50..0x02113aa0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov022_02113a50[36] = {
    0, 0, 0, 0, 0, 0, 255, 255, 140, 0, 128, 243,
    0, 0, 96, 240, 0, 16, 0, 0, 0, 0, 255, 255,
    140, 0, 172, 244, 0, 0, 96, 240, 0, 32, 0, 0
};

unsigned char data_ov022_02113a74[44] = {
    0, 0, 255, 255, 141, 0, 0, 0, 194, 1, 144, 232,
    0, 0, 0, 0, 0, 0, 1, 255, 141, 0, 0, 0,
    194, 1, 13, 233, 0, 0, 0, 0, 0, 0, 1, 255,
    141, 0, 0, 0, 194, 1, 138, 233
};
#pragma section forcedata end
#pragma pop
