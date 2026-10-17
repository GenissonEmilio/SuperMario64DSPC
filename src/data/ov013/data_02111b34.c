/* .data 0x02111b34..0x02111b64 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov013_02111b34[16] = {
    80, 0, 124, 252, 176, 4, 36, 250, 3, 255, 0, 0,
    0, 0, 247, 10
};

unsigned char data_ov013_02111b44[32] = {
    80, 0, 32, 3, 151, 4, 180, 251, 255, 255, 171, 170,
    0, 0, 244, 10, 75, 0, 160, 0, 20, 5, 17, 249,
    255, 255, 0, 64, 0, 0, 16, 7
};
#pragma section forcedata end
#pragma pop
