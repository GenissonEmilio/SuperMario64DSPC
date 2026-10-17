/* .data 0x02113a50..0x02113a74 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov020_02113a50[8] = {
    0, 0, 0, 0, 0, 0, 0, 1
};

unsigned char data_ov020_02113a58[28] = {
    67, 0, 248, 248, 50, 0, 224, 252, 0, 0, 0, 0,
    0, 0, 0, 33, 67, 0, 16, 250, 50, 0, 80, 251,
    0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
