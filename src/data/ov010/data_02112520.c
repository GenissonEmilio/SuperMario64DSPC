/* .data 0x02112520..0x02112570 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov010_02112520[16] = {
    49, 0, 208, 7, 32, 3, 192, 249, 0, 0, 0, 32,
    0, 0, 23, 0
};

unsigned char data_ov010_02112530[64] = {
    42, 0, 104, 16, 144, 1, 31, 255, 0, 0, 0, 192,
    0, 0, 85, 2, 80, 0, 64, 6, 44, 1, 244, 1,
    255, 255, 0, 96, 0, 0, 241, 10, 75, 0, 95, 6,
    169, 1, 163, 251, 255, 255, 0, 32, 0, 0, 17, 7,
    49, 0, 208, 7, 32, 3, 192, 249, 0, 0, 0, 32,
    0, 0, 248, 0
};
#pragma section forcedata end
#pragma pop
