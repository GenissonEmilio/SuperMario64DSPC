/* .data 0x020b656c..0x020b6584 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b656c[24] = {
    100, 97, 116, 97, 47, 115, 116, 97, 103, 101, 47, 107,
    111, 111, 112, 97, 51, 95, 109, 97, 112, 47, 107, 111
};
#pragma section forcedata end
#pragma pop
