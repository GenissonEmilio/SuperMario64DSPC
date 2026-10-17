/* .data 0x02111624..0x02111640 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov028_02111624[28] = {
    3, 1, 82, 3, 100, 0, 62, 254, 0, 0, 0, 0,
    0, 0, 255, 255, 3, 1, 162, 254, 100, 0, 42, 249,
    0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
