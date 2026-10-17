/* .data 0x020abb10..0x020abb18 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov001_020abb10[8] = {
    252, 0, 252, 1, 119, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
