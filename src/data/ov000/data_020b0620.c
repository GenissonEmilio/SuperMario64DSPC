/* .data 0x020b0620..0x020b0630 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b0620[16] = {
    107, 111, 95, 117, 112, 95, 110, 115, 99, 46, 98, 105,
    110, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
