/* .data 0x02111700..0x02111720 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov008_02111700[32] = {
    0, 0, 0, 0, 0, 0, 6, 255, 27, 0, 170, 5,
    0, 0, 210, 15, 0, 0, 0, 0, 0, 0, 255, 255,
    44, 0, 0, 0, 0, 0, 216, 16
};
#pragma section forcedata end
#pragma pop
