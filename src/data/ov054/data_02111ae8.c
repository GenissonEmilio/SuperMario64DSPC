/* .data 0x02111ae8..0x02111b34 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov054_02111ae8[12] = {
    210, 0, 88, 27, 0, 0, 206, 230, 0, 0, 0, 0
};

unsigned char data_ov054_02111af4[32] = {
    0, 0, 255, 255, 210, 0, 88, 27, 0, 0, 106, 230,
    0, 0, 0, 0, 0, 0, 255, 255, 210, 0, 88, 27,
    0, 0, 6, 230, 0, 0, 0, 0
};

unsigned char data_ov054_02111b14[32] = {
    0, 0, 255, 255, 210, 0, 88, 27, 0, 0, 162, 229,
    0, 0, 0, 0, 0, 0, 255, 255, 210, 0, 88, 27,
    0, 0, 62, 229, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
