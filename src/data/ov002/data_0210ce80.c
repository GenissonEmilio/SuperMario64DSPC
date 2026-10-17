/* .data 0x0210ce80..0x0210ced0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov002_0210ce80[16] = {
    248, 64, 240, 129, 91, 145, 0, 0, 248, 128, 232, 1,
    90, 145, 255, 255
};

unsigned char data_ov002_0210ce90[24] = {
    248, 64, 220, 129, 151, 225, 0, 0, 248, 64, 252, 129,
    155, 225, 0, 0, 248, 128, 28, 0, 159, 225, 255, 255
};

unsigned char data_ov002_0210cea8[40] = {
    248, 64, 188, 129, 207, 225, 0, 0, 248, 64, 220, 129,
    211, 225, 0, 0, 248, 64, 252, 129, 215, 225, 0, 0,
    248, 64, 28, 128, 219, 225, 0, 0, 248, 128, 60, 0,
    223, 225, 255, 255
};
#pragma section forcedata end
#pragma pop
