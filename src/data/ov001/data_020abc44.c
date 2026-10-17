/* .data 0x020abc44..0x020abc4c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov001_020abc44[8] = {
    240, 0, 248, 65, 26, 160, 255, 255
};
#pragma section forcedata end
#pragma pop
