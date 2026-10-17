/* .data 0x02112c44..0x02112c54 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov036_02112c44[8] = {
    255, 127, 100, 0, 2, 255, 3, 127
};

unsigned char data_ov036_02112c4c[8] = {
    102, 0, 2, 255, 0, 127, 0, 0
};
#pragma section forcedata end
#pragma pop
