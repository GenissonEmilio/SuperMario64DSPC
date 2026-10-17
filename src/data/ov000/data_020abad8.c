/* .data 0x020abad8..0x020abae0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020abad8[8] = {
    110, 100, 46, 98, 116, 112, 0, 0
};
#pragma section forcedata end
#pragma pop
