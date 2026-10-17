/* .data 0x02113800..0x02113820 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov026_02113800[4] = {
    105, 0, 234, 21
};

unsigned char data_ov026_02113804[28] = {
    177, 8, 228, 2, 0, 0, 0, 0, 0, 0, 5, 0,
    105, 0, 133, 27, 177, 8, 122, 249, 0, 0, 0, 0,
    0, 0, 7, 0
};
#pragma section forcedata end
#pragma pop
