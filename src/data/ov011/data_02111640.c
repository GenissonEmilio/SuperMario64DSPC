/* .data 0x02111640..0x02111660 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov011_02111640[32] = {
    76, 0, 204, 11, 20, 0, 220, 0, 255, 255, 0, 160,
    0, 0, 68, 7, 76, 0, 52, 244, 20, 0, 220, 0,
    255, 255, 0, 96, 0, 0, 69, 7
};
#pragma section forcedata end
#pragma pop
