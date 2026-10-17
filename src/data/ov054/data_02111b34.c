/* .data 0x02111b34..0x02111b64 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov054_02111b34[16] = {
    0, 0, 255, 255, 210, 0, 88, 27, 0, 0, 218, 228,
    0, 0, 0, 0
};

unsigned char data_ov054_02111b44[32] = {
    0, 0, 255, 255, 210, 0, 88, 27, 0, 0, 118, 228,
    0, 0, 0, 0, 0, 0, 255, 255, 210, 0, 88, 27,
    0, 0, 18, 228, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
