/* .data 0x020ab850..0x020ab858 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ab850[8] = {
    83, 95, 110, 99, 103, 46, 98, 105
};
#pragma section forcedata end
#pragma pop
