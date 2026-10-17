/* .data 0x02111720..0x02111740 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov031_02111720[32] = {
    0, 0, 0, 0, 0, 0, 255, 255, 195, 0, 155, 34,
    192, 45, 248, 25, 0, 0, 0, 0, 0, 0, 255, 255,
    195, 0, 188, 218, 196, 28, 52, 19
};
#pragma section forcedata end
#pragma pop
