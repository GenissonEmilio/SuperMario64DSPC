/* .data 0x020aaa4c..0x020aaa64 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020aaa4c[24] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    111, 112, 95, 103, 111, 46, 98, 99, 97, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
