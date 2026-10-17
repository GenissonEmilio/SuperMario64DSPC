/* .data 0x021136d4..0x02113724 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov025_021136d4[32] = {
    4, 0, 4, 0, 255, 0, 0, 0, 4, 32, 4, 0,
    255, 0, 0, 0, 4, 80, 4, 0, 255, 0, 0, 0,
    0, 80, 4, 1, 255, 0, 0, 0
};

unsigned char data_ov025_021136f4[48] = {
    0, 48, 4, 1, 255, 0, 0, 0, 4, 48, 4, 1,
    255, 0, 0, 0, 4, 0, 4, 1, 255, 0, 0, 0,
    0, 48, 28, 1, 255, 0, 0, 0, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
