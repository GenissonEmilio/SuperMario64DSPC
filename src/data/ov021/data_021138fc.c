/* .data 0x021138fc..0x02113920 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov021_021138fc[4] = {
    0, 0, 255, 255
};

unsigned char data_ov021_02113900[32] = {
    1, 1, 134, 242, 164, 237, 172, 13, 0, 0, 0, 0,
    0, 0, 255, 255, 15, 0, 214, 236, 188, 240, 69, 241,
    0, 0, 0, 0, 0, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
