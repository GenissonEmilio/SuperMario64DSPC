/* .data 0x02113800..0x02113820 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov018_02113800[4] = {
    0, 0, 0, 0
};

unsigned char data_ov018_02113804[28] = {
    0, 0, 242, 241, 8, 1, 82, 3, 33, 12, 162, 254,
    0, 0, 0, 0, 0, 0, 255, 255, 29, 1, 196, 252,
    42, 13, 108, 252
};
#pragma section forcedata end
#pragma pop
