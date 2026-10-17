/* .data 0x020aadac..0x020aadc4 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aadac[24] = {
    100, 97, 116, 97, 47, 112, 105, 99, 116, 117, 114, 101,
    47, 102, 111, 114, 95, 107, 105, 46, 98, 109, 100, 0
};
#pragma section forcedata end
#pragma pop
