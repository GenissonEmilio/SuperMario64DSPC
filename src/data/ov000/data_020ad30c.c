/* .data 0x020ad30c..0x020ad32c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ad30c[32] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 98,
    97, 116, 116, 97, 110, 47, 98, 97, 116, 116, 97, 110,
    46, 98, 109, 100, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
