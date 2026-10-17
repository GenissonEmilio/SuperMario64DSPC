/* .data 0x020aeccc..0x020aecec */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aeccc[32] = {
    77, 71, 47, 100, 95, 50, 100, 95, 109, 103, 95, 97,
    109, 105, 100, 97, 95, 102, 97, 99, 101, 95, 73, 95,
    110, 99, 103, 46, 98, 105, 110, 0
};
#pragma section forcedata end
#pragma pop
