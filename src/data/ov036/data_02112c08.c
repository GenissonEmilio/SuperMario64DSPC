/* .data 0x02112c08..0x02112c44 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov036_02112c18[16] = {
    192, 79, 0, 0, 255, 0, 0, 0, 255, 255, 255, 255,
    255, 255, 255, 255
};

unsigned char data_ov036_02112c08[16] = {
    67, 76, 80, 83, 8, 0, 2, 0, 192, 15, 0, 0,
    255, 0, 0, 0
};

unsigned char data_ov036_02112c28[28] = {
    0, 0, 13, 255, 255, 127, 13, 0, 24, 255, 255, 127,
    37, 0, 25, 255, 255, 127, 62, 0, 36, 255, 255, 127,
    98, 0, 2, 255
};
#pragma section forcedata end
#pragma pop
