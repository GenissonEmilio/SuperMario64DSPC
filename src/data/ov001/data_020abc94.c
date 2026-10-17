/* .data 0x020abc94..0x020abcb4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov001_020abc94[32] = {
    192, 0, 248, 65, 26, 160, 0, 0, 184, 0, 232, 129,
    8, 144, 0, 0, 184, 128, 8, 128, 12, 144, 0, 0,
    216, 0, 248, 65, 138, 144, 255, 255
};
#pragma section forcedata end
#pragma pop
