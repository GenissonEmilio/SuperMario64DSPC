/* .data 0x02111c20..0x02111c98 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov023_02111c20[24] = {
    0, 0, 85, 85, 0, 0, 8, 0, 0, 0, 18, 253,
    100, 0, 18, 253, 0, 0, 85, 85, 0, 0, 8, 0
};

unsigned char data_ov023_02111c38[28] = {
    67, 76, 80, 83, 8, 0, 8, 0, 0, 0, 3, 0,
    255, 0, 0, 0, 0, 0, 11, 0, 255, 0, 0, 0,
    0, 48, 3, 0
};

unsigned char data_ov023_02111c54[68] = {
    255, 0, 0, 0, 0, 32, 3, 0, 255, 0, 0, 0,
    4, 32, 3, 0, 255, 0, 0, 0, 0, 0, 35, 0,
    255, 0, 0, 0, 0, 32, 3, 1, 255, 0, 0, 0,
    0, 0, 3, 1, 255, 0, 0, 0, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
