/* .data 0x020aa520..0x020aa530 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aa520[16] = {
    77, 71, 47, 108, 117, 105, 103, 105, 95, 100, 46, 98,
    109, 100, 0, 0
};
#pragma section forcedata end
#pragma pop
