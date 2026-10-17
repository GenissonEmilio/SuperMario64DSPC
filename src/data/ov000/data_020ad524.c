/* .data 0x020ad524..0x020ad54c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ad524[8] = {
    46, 98, 109, 100, 0, 0, 0, 0
};

unsigned char data_ov000_020ad52c[32] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 109,
    111, 110, 107, 101, 121, 47, 109, 111, 110, 107, 101, 121,
    46, 98, 109, 100, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
