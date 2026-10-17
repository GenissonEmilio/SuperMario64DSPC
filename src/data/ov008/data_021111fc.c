/* .data 0x021111fc..0x02111210 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov008_021111fc[8] = {
    0, 0, 2, 255, 255, 127, 2, 0
};

unsigned char data_ov008_02111204[12] = {
    2, 255, 255, 127, 4, 0, 2, 255, 255, 127, 0, 0
};
#pragma section forcedata end
#pragma pop
