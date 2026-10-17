/* .data 0x02111508..0x0211153c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov008_02111508[4] = {
    67, 76, 80, 83
};

unsigned char data_ov008_0211150c[20] = {
    8, 0, 21, 0, 192, 15, 4, 0, 2, 0, 0, 0,
    192, 15, 4, 0, 255, 0, 0, 0
};

unsigned char data_ov008_02111520[28] = {
    200, 15, 68, 0, 1, 0, 0, 0, 192, 15, 4, 0,
    0, 0, 0, 0, 194, 15, 4, 0, 255, 0, 0, 0,
    198, 15, 4, 0
};
#pragma section forcedata end
#pragma pop
