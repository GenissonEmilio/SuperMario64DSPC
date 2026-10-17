/* .data 0x02111518..0x0211153c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov039_02111518[8] = {
    30, 0, 0, 0, 42, 249, 68, 253
};

unsigned char data_ov039_02111520[28] = {
    0, 0, 0, 0, 0, 0, 5, 255, 27, 0, 0, 0,
    48, 248, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255,
    6, 1, 132, 234
};
#pragma section forcedata end
#pragma pop
