/* .data 0x02111a4c..0x02111abc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov054_02111a4c[12] = {
    0, 0, 126, 4, 0, 0, 0, 128, 0, 0, 255, 255
};

unsigned char data_ov054_02111a58[32] = {
    210, 0, 210, 15, 0, 0, 0, 0, 0, 0, 0, 192,
    0, 0, 255, 255, 210, 0, 54, 16, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 255, 255
};

unsigned char data_ov054_02111a78[68] = {
    210, 0, 154, 16, 0, 0, 0, 0, 0, 0, 0, 192,
    0, 0, 255, 255, 210, 0, 254, 16, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 255, 255, 210, 0, 98, 17,
    0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 255, 255,
    210, 0, 198, 17, 0, 0, 0, 0, 0, 0, 0, 192,
    0, 0, 255, 255, 210, 0, 42, 18
};
#pragma section forcedata end
#pragma pop
