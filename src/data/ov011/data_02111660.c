/* .data 0x02111660..0x02111680 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov011_02111660[32] = {
    67, 0, 112, 254, 50, 0, 254, 247, 0, 0, 0, 0,
    0, 0, 7, 255, 67, 0, 104, 247, 106, 255, 60, 246,
    0, 0, 0, 0, 0, 0, 5, 255
};
#pragma section forcedata end
#pragma pop
