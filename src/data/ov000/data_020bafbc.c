/* .data 0x020bafbc..0x020bafec */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020bafbc[48] = {
    100, 97, 116, 97, 47, 110, 111, 114, 109, 97, 108, 95,
    111, 98, 106, 47, 111, 98, 106, 95, 114, 97, 99, 101,
    95, 102, 108, 97, 103, 47, 111, 98, 106, 95, 114, 97,
    99, 101, 95, 102, 108, 97, 103, 46, 98, 109, 100, 0
};
#pragma section forcedata end
#pragma pop
