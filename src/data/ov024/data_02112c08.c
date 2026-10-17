/* .data 0x02112c08..0x02112c44 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov024_02112c08[16] = {
    14, 0, 2, 255, 2, 127, 16, 0, 2, 255, 2, 127,
    18, 0, 2, 255
};

unsigned char data_ov024_02112c18[44] = {
    2, 127, 20, 0, 2, 255, 2, 127, 22, 0, 2, 255,
    2, 127, 24, 0, 2, 255, 2, 127, 26, 0, 2, 255,
    2, 127, 28, 0, 2, 255, 2, 127, 30, 0, 2, 255,
    2, 127, 32, 0, 2, 255, 2, 127
};
#pragma section forcedata end
#pragma pop
