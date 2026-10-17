/* .data 0x02111b34..0x02111b64 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov008_02111b34[16] = {
    0, 0, 206, 19, 37, 226, 104, 16, 0, 0, 106, 19,
    37, 226, 104, 16
};

unsigned char data_ov008_02111b44[32] = {
    0, 0, 6, 19, 37, 226, 104, 16, 0, 0, 162, 18,
    37, 226, 104, 16, 0, 0, 62, 18, 37, 226, 104, 16,
    0, 0, 218, 17, 37, 226, 104, 16
};
#pragma section forcedata end
#pragma pop
