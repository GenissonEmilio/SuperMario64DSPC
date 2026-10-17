/* .data 0x02111624..0x02111640 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov008_02111624[28] = {
    0, 0, 255, 255, 245, 0, 68, 253, 0, 0, 240, 10,
    0, 0, 0, 0, 0, 0, 255, 255, 243, 0, 204, 247,
    0, 0, 246, 9
};
#pragma section forcedata end
#pragma pop
