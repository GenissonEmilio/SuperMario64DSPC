/* .data 0x020acecc..0x020aceec */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020acecc[32] = {
    100, 97, 116, 97, 47, 115, 116, 97, 103, 101, 47, 99,
    97, 118, 101, 47, 99, 97, 118, 101, 95, 105, 99, 108,
    46, 98, 105, 110, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
