/* .data 0x02111928..0x02111994 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov058_02111928[4] = {
    192, 15, 0, 0
};

unsigned char data_ov058_0211192c[24] = {
    255, 0, 0, 0, 196, 15, 3, 0, 255, 0, 0, 0,
    68, 48, 0, 0, 255, 0, 0, 0, 192, 15, 0, 4
};

unsigned char data_ov058_02111944[28] = {
    255, 0, 0, 0, 69, 48, 3, 0, 255, 0, 0, 0,
    66, 48, 3, 0, 255, 0, 0, 0, 66, 0, 3, 0,
    255, 0, 0, 0
};

unsigned char data_ov058_02111960[52] = {
    69, 0, 3, 0, 255, 0, 0, 0, 64, 0, 3, 0,
    255, 0, 0, 0, 196, 15, 0, 0, 255, 0, 0, 0,
    132, 48, 0, 0, 255, 0, 0, 0, 133, 0, 3, 0,
    255, 0, 0, 0, 132, 0, 3, 0, 255, 0, 0, 0,
    193, 15, 3, 0
};
#pragma section forcedata end
#pragma pop
