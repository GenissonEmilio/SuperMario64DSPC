/* .data 0x020ab858..0x020ab870 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ab858[4] = {
    110, 0, 0, 0
};

unsigned char data_ov000_020ab85c[20] = {
    77, 71, 47, 100, 95, 50, 100, 95, 109, 103, 95, 99,
    111, 109, 109, 111, 110, 95, 110, 99
};
#pragma section forcedata end
#pragma pop
