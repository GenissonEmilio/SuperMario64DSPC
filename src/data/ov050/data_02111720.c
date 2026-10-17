/* .data 0x02111720..0x02111740 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov050_02111720[32] = {
    23, 0, 116, 245, 144, 1, 84, 11, 0, 0, 0, 0,
    0, 0, 255, 255, 23, 0, 116, 245, 144, 1, 140, 10,
    0, 0, 0, 0, 0, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
