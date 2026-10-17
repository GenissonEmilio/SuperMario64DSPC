/* .data 0x02112bdc..0x02112c08 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov024_02112be4[8] = {
    0, 0, 4, 255, 255, 255, 4, 0
};

unsigned char data_ov024_02112bdc[8] = {
    63, 202, 255, 229, 250, 0, 137, 233
};

unsigned char data_ov024_02112bec[28] = {
    2, 255, 2, 127, 6, 0, 2, 255, 2, 127, 8, 0,
    2, 255, 2, 127, 10, 0, 2, 255, 2, 127, 12, 0,
    2, 255, 2, 127
};
#pragma section forcedata end
#pragma pop
