/* .data 0x021121b8..0x021121d8 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov035_021121b8[8] = {
    67, 76, 80, 83, 8, 0, 1, 0
};

unsigned char data_ov035_021121c0[24] = {
    192, 31, 0, 0, 255, 0, 0, 0, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
