/* .data 0x02111640..0x02111660 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov028_02111640[32] = {
    0, 0, 255, 255, 3, 1, 242, 249, 100, 0, 6, 255,
    0, 0, 0, 0, 0, 0, 255, 255, 3, 1, 170, 5,
    100, 0, 192, 249, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
