/* .data 0x02113800..0x02113820 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov014_02113800[4] = {
    10, 0, 144, 1
};

unsigned char data_ov014_02113804[28] = {
    238, 2, 108, 7, 0, 0, 0, 0, 0, 0, 255, 255,
    51, 0, 169, 5, 238, 2, 151, 1, 0, 0, 228, 232,
    0, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
