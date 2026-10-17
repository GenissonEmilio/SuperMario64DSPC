/* .data 0x020b0024..0x020b0048 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b0024[36] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 110,
    111, 107, 111, 110, 111, 107, 111, 47, 110, 111, 107, 111,
    110, 111, 107, 111, 46, 98, 109, 100, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
