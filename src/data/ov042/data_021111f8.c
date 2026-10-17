/* .data 0x021111f8..0x02111204 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov042_021111f8[4] = {
    0, 0, 180, 226
};

unsigned char data_ov042_021111fc[8] = {
    64, 31, 0, 192, 0, 0, 1, 10
};
#pragma section forcedata end
#pragma pop
