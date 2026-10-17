/* .data 0x02113800..0x02113820 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov029_02113800[4] = {
    140, 8, 122, 11
};

unsigned char data_ov029_02113804[28] = {
    0, 0, 0, 128, 0, 0, 255, 255, 251, 0, 122, 244,
    119, 1, 214, 6, 0, 0, 0, 224, 0, 0, 255, 255,
    251, 0, 116, 245
};
#pragma section forcedata end
#pragma pop
