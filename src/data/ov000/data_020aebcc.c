/* .data 0x020aebcc..0x020aebec */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aebcc[32] = {
    77, 71, 47, 100, 95, 50, 100, 95, 109, 115, 103, 95,
    103, 97, 109, 101, 95, 111, 118, 101, 114, 95, 83, 95,
    110, 99, 103, 46, 98, 105, 110, 0
};
#pragma section forcedata end
#pragma pop
