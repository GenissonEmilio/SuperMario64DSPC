/* .data 0x02113ab8..0x02113af8 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov020_02113ab8[4] = {
    67, 0, 248, 248
};

unsigned char data_ov020_02113abc[28] = {
    50, 0, 224, 252, 0, 0, 0, 0, 0, 0, 0, 33,
    67, 0, 16, 250, 50, 0, 80, 251, 0, 0, 0, 0,
    0, 0, 0, 1
};

unsigned char data_ov020_02113ad8[32] = {
    67, 0, 248, 248, 50, 0, 224, 252, 0, 0, 0, 0,
    0, 0, 0, 33, 67, 0, 16, 250, 50, 0, 80, 251,
    0, 0, 0, 0, 0, 0, 0, 1
};
#pragma section forcedata end
#pragma pop
