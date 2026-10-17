/* .data 0x020abb94..0x020abbb4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov001_020abb94[32] = {
    232, 32, 232, 193, 68, 2, 0, 0, 216, 32, 232, 193,
    4, 2, 0, 0, 216, 32, 216, 193, 0, 2, 0, 0,
    232, 32, 216, 193, 64, 2, 255, 255
};
#pragma section forcedata end
#pragma pop
