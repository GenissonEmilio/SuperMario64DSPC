/* .data 0x020aefac..0x020aefcc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aefac[32] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 107,
    111, 111, 112, 97, 47, 107, 111, 111, 112, 97, 95, 119,
    97, 105, 116, 46, 98, 116, 112, 0
};
#pragma section forcedata end
#pragma pop
