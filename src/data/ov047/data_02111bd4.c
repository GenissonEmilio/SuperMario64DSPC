/* .data 0x02111bd4..0x02111c14 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov047_02111bd4[12] = {
    67, 76, 80, 83, 8, 0, 2, 0, 192, 79, 0, 0
};

unsigned char data_ov047_02111be0[20] = {
    255, 0, 0, 0, 192, 15, 0, 0, 255, 0, 0, 0,
    255, 255, 255, 255, 255, 255, 255, 255
};

unsigned char data_ov047_02111bf4[32] = {
    67, 76, 80, 83, 8, 0, 2, 0, 192, 15, 0, 0,
    255, 0, 0, 0, 196, 15, 0, 0, 255, 0, 0, 0,
    255, 255, 255, 255, 255, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
