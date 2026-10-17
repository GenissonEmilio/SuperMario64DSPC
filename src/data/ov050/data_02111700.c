/* .data 0x02111700..0x02111720 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov050_02111700[32] = {
    23, 0, 230, 251, 0, 0, 156, 255, 0, 0, 0, 0,
    0, 0, 255, 255, 23, 0, 230, 251, 0, 0, 212, 254,
    0, 0, 0, 0, 0, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
