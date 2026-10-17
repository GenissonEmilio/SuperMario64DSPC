/* .data 0x02112c08..0x02112c44 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov045_02112c08[16] = {
    0, 0, 0, 0, 0, 0, 2, 255, 79, 0, 0, 0,
    116, 14, 100, 0
};

unsigned char data_ov045_02112c18[44] = {
    0, 0, 0, 0, 0, 0, 255, 255, 79, 0, 16, 14,
    116, 245, 4, 1, 0, 0, 0, 0, 0, 0, 255, 255,
    161, 0, 118, 228, 28, 12, 224, 252, 0, 0, 0, 0,
    0, 0, 255, 255, 10, 1, 176, 4
};
#pragma section forcedata end
#pragma pop
