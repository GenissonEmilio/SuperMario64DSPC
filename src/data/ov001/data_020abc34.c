/* .data 0x020abc34..0x020abc3c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov001_020abc34[8] = {
    240, 0, 248, 65, 28, 176, 255, 255
};
#pragma section forcedata end
#pragma pop
