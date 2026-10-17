/* .data 0x020abad0..0x020abad8 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020abad0[8] = {
    116, 120, 95, 108, 105, 101, 95, 101
};
#pragma section forcedata end
#pragma pop
