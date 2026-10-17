/* .data 0x020abbb4..0x020abbf4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov001_020abbb4[64] = {
    248, 64, 128, 129, 192, 1, 0, 0, 248, 64, 160, 129,
    196, 1, 0, 0, 248, 64, 192, 129, 200, 1, 0, 0,
    248, 64, 224, 129, 204, 1, 0, 0, 248, 64, 0, 128,
    208, 1, 0, 0, 248, 64, 32, 128, 212, 1, 0, 0,
    248, 64, 64, 128, 216, 1, 0, 0, 248, 64, 96, 128,
    220, 1, 255, 255
};
#pragma section forcedata end
#pragma pop
