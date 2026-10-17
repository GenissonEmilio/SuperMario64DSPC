/* .data 0x020aa530..0x020aa540 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aa530[16] = {
    77, 71, 47, 102, 95, 112, 97, 114, 116, 115, 46, 98,
    109, 100, 0, 0
};
#pragma section forcedata end
#pragma pop
