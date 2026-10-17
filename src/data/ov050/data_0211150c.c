/* .data 0x0211150c..0x0211153c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov050_0211150c[20] = {
    250, 0, 42, 249, 37, 226, 232, 3, 250, 0, 192, 249,
    13, 255, 140, 10, 144, 1, 84, 11
};

unsigned char data_ov050_02111520[28] = {
    37, 226, 98, 248, 200, 0, 252, 8, 37, 226, 42, 249,
    200, 0, 252, 8, 37, 226, 242, 249, 200, 0, 252, 8,
    37, 226, 202, 8
};
#pragma section forcedata end
#pragma pop
