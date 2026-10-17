/* .data 0x02111700..0x02111720 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov031_02111700[32] = {
    0, 0, 0, 0, 0, 0, 255, 255, 194, 0, 28, 231,
    57, 240, 201, 32, 0, 0, 0, 0, 0, 0, 255, 255,
    194, 0, 121, 41, 190, 221, 161, 194
};
#pragma section forcedata end
#pragma pop
