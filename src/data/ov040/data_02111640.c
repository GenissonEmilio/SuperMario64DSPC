/* .data 0x02111640..0x02111660 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov040_02111640[32] = {
    161, 0, 90, 249, 228, 243, 206, 254, 0, 0, 0, 0,
    0, 0, 255, 255, 161, 0, 3, 247, 228, 243, 31, 252,
    0, 0, 0, 0, 0, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
