/* .data 0x0211150c..0x0211153c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov011_0211150c[20] = {
    0, 0, 200, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    0, 0, 212, 254, 0, 0, 200, 0
};

unsigned char data_ov011_02111520[28] = {
    0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 44, 1, 0, 0, 0, 128, 0, 0, 0, 7,
    0, 0, 178, 12
};
#pragma section forcedata end
#pragma pop
