/* .data 0x02113d80..0x02113dc4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov020_02113d80[16] = {
    67, 0, 184, 11, 50, 0, 144, 1, 0, 0, 0, 0,
    0, 0, 0, 1
};

unsigned char data_ov020_02113d90[24] = {
    67, 0, 190, 10, 60, 0, 102, 8, 0, 0, 86, 149,
    0, 0, 0, 1, 68, 0, 190, 251, 160, 246, 66, 4
};

unsigned char data_ov020_02113da8[28] = {
    0, 0, 0, 96, 0, 0, 1, 2, 10, 1, 158, 2,
    44, 247, 178, 253, 0, 0, 0, 224, 0, 0, 255, 255,
    67, 0, 190, 251
};
#pragma section forcedata end
#pragma pop
