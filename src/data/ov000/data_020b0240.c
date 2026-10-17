/* .data 0x020b0240..0x020b0264 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b0240[36] = {
    100, 97, 116, 97, 47, 110, 111, 114, 109, 97, 108, 95,
    111, 98, 106, 47, 98, 105, 114, 100, 47, 98, 105, 114,
    100, 95, 102, 108, 121, 46, 98, 99, 97, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
