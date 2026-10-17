/* .data 0x02113a50..0x02113aa0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov015_02113a50[36] = {
    5, 0, 3, 1, 255, 0, 0, 0, 204, 15, 3, 1,
    255, 0, 0, 0, 12, 48, 3, 1, 255, 0, 0, 0,
    12, 0, 3, 1, 255, 0, 0, 0, 196, 15, 3, 1
};

unsigned char data_ov015_02113a74[44] = {
    255, 0, 0, 0, 196, 15, 0, 1, 255, 0, 0, 0,
    204, 63, 3, 1, 255, 0, 0, 0, 5, 48, 3, 1,
    255, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
