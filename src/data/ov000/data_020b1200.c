/* .data 0x020b1200..0x020b1224 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b1200[36] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    116, 120, 95, 101, 100, 95, 107, 105, 115, 115, 95, 116,
    111, 95, 112, 111, 115, 101, 46, 98, 116, 112, 0, 0
};
#pragma section forcedata end
#pragma pop
