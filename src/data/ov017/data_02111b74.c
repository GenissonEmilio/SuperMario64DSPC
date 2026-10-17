/* .data 0x02111b74..0x02111bb4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov017_02111b74[20] = {
    37, 226, 44, 1, 172, 254, 116, 245, 37, 226, 6, 255,
    186, 255, 188, 2, 37, 226, 38, 2
};

unsigned char data_ov017_02111b88[44] = {
    172, 254, 216, 245, 37, 226, 238, 2, 157, 3, 90, 10,
    37, 226, 32, 3, 172, 254, 60, 246, 37, 226, 82, 3,
    221, 255, 182, 3, 37, 226, 250, 0, 59, 1, 14, 6,
    37, 226, 6, 255, 168, 2, 108, 7
};
#pragma section forcedata end
#pragma pop
