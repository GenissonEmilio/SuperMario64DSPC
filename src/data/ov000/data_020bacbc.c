/* .data 0x020bacbc..0x020bacec */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020bacbc[48] = {
    100, 97, 116, 97, 47, 115, 116, 97, 103, 101, 47, 98,
    97, 116, 116, 97, 110, 95, 107, 105, 110, 103, 95, 109,
    97, 112, 47, 98, 97, 116, 116, 97, 110, 95, 107, 105,
    110, 103, 95, 109, 97, 112, 46, 107, 99, 108, 0, 0
};
#pragma section forcedata end
#pragma pop
