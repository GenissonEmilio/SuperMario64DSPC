/* .data 0x02113800..0x02113820 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov036_02113800[4] = {
    0, 0, 248, 0
};

unsigned char data_ov036_02113804[28] = {
    19, 0, 60, 15, 20, 11, 60, 246, 0, 0, 0, 0,
    0, 0, 5, 0, 148, 0, 148, 17, 28, 12, 72, 244,
    0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
