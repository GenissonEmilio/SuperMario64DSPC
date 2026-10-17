/* .data 0x02113abc..0x02113b08 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov021_02113abc[4] = {
    255, 255, 255, 255
};

unsigned char data_ov021_02113ac0[32] = {
    1, 1, 134, 242, 164, 237, 172, 13, 0, 0, 0, 0,
    0, 0, 255, 255, 15, 0, 214, 236, 188, 240, 69, 241,
    0, 0, 0, 0, 0, 0, 255, 255
};

unsigned char data_ov021_02113ae0[40] = {
    37, 226, 110, 246, 208, 7, 22, 18, 37, 226, 4, 247,
    208, 7, 128, 17, 37, 226, 154, 247, 208, 7, 234, 16,
    37, 226, 48, 248, 208, 7, 154, 16, 37, 226, 198, 248,
    208, 7, 74, 16
};
#pragma section forcedata end
#pragma pop
