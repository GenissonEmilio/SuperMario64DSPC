/* .data 0x02113a74..0x02113aa0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov021_02113a74[12] = {
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255
};

unsigned char data_ov021_02113a80[32] = {
    67, 76, 80, 83, 8, 0, 1, 0, 192, 31, 0, 0,
    255, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
