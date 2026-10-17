/* .data 0x021140ec..0x02114148 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov021_021140ec[12] = {
    255, 0, 0, 0, 196, 63, 4, 0, 255, 0, 0, 0
};

unsigned char data_ov021_021140f8[16] = {
    192, 15, 36, 0, 255, 0, 0, 0, 192, 15, 136, 4,
    255, 0, 0, 0
};

unsigned char data_ov021_02114108[64] = {
    194, 15, 4, 1, 255, 0, 0, 0, 192, 15, 4, 2,
    255, 0, 0, 0, 192, 15, 0, 4, 255, 0, 0, 0,
    204, 15, 136, 0, 255, 0, 0, 0, 194, 79, 4, 0,
    255, 0, 0, 0, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255,
    255, 255, 255, 255
};
#pragma section forcedata end
#pragma pop
