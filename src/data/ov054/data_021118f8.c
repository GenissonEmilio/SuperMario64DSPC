/* .data 0x021118f8..0x02111928 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov054_021118f8[20] = {
    49, 0, 192, 18, 0, 0, 56, 255, 0, 0, 0, 192,
    0, 0, 243, 0, 210, 0, 172, 13
};

unsigned char data_ov054_0211190c[28] = {
    0, 0, 130, 251, 0, 0, 0, 0, 0, 0, 255, 255,
    210, 0, 172, 13, 0, 0, 230, 251, 0, 0, 0, 0,
    0, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
