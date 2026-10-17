/* .data 0x02111b34..0x02111b64 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov047_02111b44[16] = {
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255
};

unsigned char data_ov047_02111b34[16] = {
    67, 76, 80, 83, 8, 0, 1, 0, 192, 15, 0, 0,
    255, 0, 0, 0
};

unsigned char data_ov047_02111b54[16] = {
    67, 76, 80, 83, 8, 0, 1, 0, 192, 15, 0, 0,
    255, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
