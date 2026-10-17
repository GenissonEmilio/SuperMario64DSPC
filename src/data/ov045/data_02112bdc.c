/* .data 0x02112bdc..0x02112c08 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov045_02112bdc[16] = {
    0, 0, 255, 255, 19, 0, 176, 235, 15, 14, 44, 1,
    0, 0, 0, 0
};

unsigned char data_ov045_02112bec[28] = {
    0, 0, 5, 0, 153, 0, 204, 247, 216, 13, 0, 0,
    0, 0, 0, 0, 0, 0, 1, 0, 31, 0, 68, 228,
    70, 5, 0, 0
};
#pragma section forcedata end
#pragma pop
