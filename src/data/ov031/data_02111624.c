/* .data 0x02111624..0x02111660 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov031_02111624[28] = {
    255, 0, 0, 0, 192, 15, 4, 0, 255, 0, 0, 0,
    196, 63, 4, 0, 255, 0, 0, 0, 196, 143, 0, 1,
    255, 0, 0, 0
};

unsigned char data_ov031_02111640[32] = {
    192, 143, 0, 1, 255, 0, 0, 0, 192, 223, 0, 0,
    255, 0, 0, 0, 197, 223, 0, 0, 255, 0, 0, 0,
    196, 223, 0, 0, 255, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
