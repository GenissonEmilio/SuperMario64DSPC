/* .data 0x021111f8..0x02111204 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov038_021111f8[4] = {
    0, 255, 255, 255
};

unsigned char data_ov038_021111fc[8] = {
    16, 39, 32, 78, 1, 0, 112, 192
};
#pragma section forcedata end
#pragma pop
