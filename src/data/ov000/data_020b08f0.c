/* .data 0x020b08f0..0x020b0924 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b08f0[16] = {
    116, 97, 108, 95, 109, 111, 100, 101, 108, 46, 98, 109,
    100, 0, 0, 0
};

unsigned char data_ov000_020b0900[36] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    89, 95, 116, 120, 95, 115, 108, 101, 101, 112, 95, 116,
    111, 95, 108, 105, 101, 46, 98, 116, 112, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
