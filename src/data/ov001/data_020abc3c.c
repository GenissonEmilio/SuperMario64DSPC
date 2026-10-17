/* .data 0x020abc3c..0x020abc44 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov001_020abc3c[8] = {
    240, 0, 248, 65, 30, 192, 255, 255
};
#pragma section forcedata end
#pragma pop
