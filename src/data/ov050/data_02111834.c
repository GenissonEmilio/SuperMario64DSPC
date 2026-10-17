/* .data 0x02111834..0x02111860 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov050_02111834[16] = {
    144, 1, 240, 10, 0, 0, 0, 0, 0, 0, 255, 255,
    15, 0, 198, 248
};

unsigned char data_ov050_02111844[28] = {
    144, 1, 174, 252, 0, 0, 0, 0, 0, 0, 255, 255,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
