/* .data 0x020abcd8..0x020abd18 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov001_020abcd8[64] = {
    192, 0, 216, 65, 28, 176, 0, 0, 184, 0, 200, 129,
    14, 144, 0, 0, 184, 128, 232, 129, 18, 144, 0, 0,
    216, 0, 216, 65, 144, 144, 0, 0, 192, 0, 24, 64,
    30, 192, 0, 0, 184, 0, 8, 128, 20, 144, 0, 0,
    184, 128, 40, 128, 24, 144, 0, 0, 216, 0, 24, 64,
    150, 144, 255, 255
};
#pragma section forcedata end
#pragma pop
