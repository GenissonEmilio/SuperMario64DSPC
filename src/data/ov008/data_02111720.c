/* .data 0x02111720..0x02111740 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov008_02111720[32] = {
    0, 0, 0, 0, 0, 0, 6, 255, 30, 0, 145, 9,
    250, 0, 163, 13, 0, 0, 0, 0, 0, 0, 7, 255,
    28, 0, 176, 4, 0, 0, 50, 0
};
#pragma section forcedata end
#pragma pop
