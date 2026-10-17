/* .data 0x02112318..0x02112358 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov035_02112318[8] = {
    1, 255, 0, 0, 100, 25, 0, 0
};

unsigned char data_ov035_02112320[56] = {
    0, 0, 0, 0, 0, 0, 2, 255, 80, 251, 151, 7,
    0, 0, 0, 0, 0, 192, 0, 0, 2, 255, 226, 4,
    172, 13, 220, 5, 0, 0, 0, 128, 0, 0, 2, 255,
    224, 252, 190, 16, 44, 1, 0, 0, 0, 0, 0, 0,
    2, 255, 190, 5, 201, 24, 190, 5
};
#pragma section forcedata end
#pragma pop
