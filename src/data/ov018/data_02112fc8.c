/* .data 0x02112fc8..0x02112ff8 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov018_02112fc8[8] = {
    15, 0, 96, 20, 108, 238, 236, 1
};

unsigned char data_ov018_02112fd0[40] = {
    0, 0, 0, 64, 0, 0, 240, 241, 52, 1, 40, 10,
    108, 238, 204, 16, 0, 0, 0, 0, 0, 0, 1, 255,
    162, 0, 252, 239, 60, 251, 254, 6, 0, 0, 0, 192,
    0, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
