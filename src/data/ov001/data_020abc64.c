/* .data 0x020abc64..0x020abc7c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov001_020abc64[24] = {
    232, 0, 232, 129, 14, 144, 0, 0, 232, 128, 8, 128,
    18, 144, 0, 0, 8, 0, 248, 65, 144, 144, 255, 255
};
#pragma section forcedata end
#pragma pop
