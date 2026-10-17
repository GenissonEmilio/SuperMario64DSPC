/* .data 0x02111640..0x02111660 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov050_02111640[32] = {
    251, 0, 36, 250, 32, 3, 36, 250, 0, 0, 0, 0,
    0, 0, 255, 255, 251, 0, 200, 0, 144, 1, 240, 10,
    0, 0, 0, 0, 0, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
