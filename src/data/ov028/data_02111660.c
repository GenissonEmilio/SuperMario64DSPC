/* .data 0x02111660..0x02111680 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov028_02111660[32] = {
    0, 0, 255, 255, 3, 1, 68, 253, 100, 0, 182, 3,
    0, 0, 0, 0, 0, 0, 255, 255, 3, 1, 176, 4,
    100, 0, 88, 2, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
