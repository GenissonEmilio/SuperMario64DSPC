/* .data 0x02111960..0x02111978 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov041_02111960[24] = {
    56, 255, 0, 0, 184, 11, 56, 255, 0, 0, 228, 12,
    72, 254, 94, 1, 226, 4, 184, 1, 94, 1, 226, 4
};
#pragma section forcedata end
#pragma pop
