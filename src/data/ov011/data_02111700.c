/* .data 0x02111700..0x02111720 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov011_02111700[32] = {
    67, 0, 208, 7, 156, 255, 60, 246, 0, 0, 0, 224,
    0, 0, 10, 255, 67, 0, 8, 7, 156, 255, 68, 253,
    0, 0, 0, 64, 0, 0, 10, 255
};
#pragma section forcedata end
#pragma pop
