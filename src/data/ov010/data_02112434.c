/* .data 0x02112434..0x02112464 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov010_02112434[4] = {
    69, 1, 112, 254
};

unsigned char data_ov010_02112438[20] = {
    255, 255, 0, 192, 0, 0, 10, 7, 75, 0, 218, 243,
    69, 1, 251, 255, 255, 255, 0, 192
};

unsigned char data_ov010_0211244c[24] = {
    0, 0, 11, 7, 80, 0, 118, 243, 200, 0, 2, 252,
    255, 255, 0, 192, 0, 0, 18, 11, 237, 0, 84, 242
};
#pragma section forcedata end
#pragma pop
