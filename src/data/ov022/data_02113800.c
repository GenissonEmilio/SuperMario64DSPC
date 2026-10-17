/* .data 0x02113800..0x02113820 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov022_02113800[4] = {
    0, 0, 0, 0
};

unsigned char data_ov022_02113804[28] = {
    0, 0, 255, 255, 150, 0, 203, 243, 94, 1, 47, 13,
    0, 0, 0, 0, 0, 0, 255, 255, 240, 0, 14, 237,
    44, 1, 210, 246
};
#pragma section forcedata end
#pragma pop
