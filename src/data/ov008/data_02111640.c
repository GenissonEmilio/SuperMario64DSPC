/* .data 0x02111640..0x02111660 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov008_02111640[32] = {
    0, 0, 0, 0, 0, 0, 99, 1, 76, 0, 224, 252,
    0, 0, 204, 16, 255, 255, 0, 0, 0, 0, 232, 3,
    46, 1, 96, 9, 0, 0, 40, 10
};
#pragma section forcedata end
#pragma pop
