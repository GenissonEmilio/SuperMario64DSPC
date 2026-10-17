/* .data 0x02113800..0x02113820 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov009_02113800[4] = {
    156, 24, 232, 1
};

unsigned char data_ov009_02113804[28] = {
    188, 2, 80, 20, 109, 1, 200, 0, 192, 18, 138, 1,
    64, 6, 128, 12, 137, 1, 108, 7, 100, 25, 217, 1,
    20, 5, 112, 23
};
#pragma section forcedata end
#pragma pop
