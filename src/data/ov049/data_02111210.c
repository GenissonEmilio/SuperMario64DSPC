/* .data 0x02111210..0x02111238 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov049_02111210[8] = {
    1, 0, 64, 6, 47, 0, 0, 0
};

unsigned char data_ov049_02111218[16] = {
    67, 76, 80, 83, 8, 0, 1, 0, 192, 15, 4, 0,
    255, 0, 0, 0
};

unsigned char data_ov049_02111228[16] = {
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
