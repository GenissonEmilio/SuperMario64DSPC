/* .data 0x020aceac..0x020acecc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aceac[32] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    104, 95, 99, 97, 114, 114, 121, 95, 119, 97, 105, 116,
    46, 98, 99, 97, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
