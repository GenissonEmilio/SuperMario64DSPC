/* .data 0x02099f88..0x02099fa4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02099f88[12] = {
    0, 16, 0, 0, 0, 16, 0, 0, 0, 16, 0, 0
};

unsigned char data_02099f94[16] = {
    4, 0, 8, 0, 16, 0, 32, 0, 64, 0, 128, 0,
    0, 1, 0, 2
};
#pragma section forcedata end
#pragma pop
