/* .data 0x020ab888..0x020ab8a0 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ab888[12] = {
    70, 95, 110, 99, 103, 46, 98, 105, 110, 0, 0, 0
};

unsigned char data_ov000_020ab894[12] = {
    77, 71, 47, 100, 95, 50, 100, 95, 109, 103, 95, 116
};
#pragma section forcedata end
#pragma pop
