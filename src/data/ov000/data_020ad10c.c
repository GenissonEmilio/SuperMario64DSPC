/* .data 0x020ad10c..0x020ad12c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ad10c[32] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    115, 108, 101, 101, 112, 95, 116, 111, 95, 108, 105, 101,
    46, 98, 99, 97, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
