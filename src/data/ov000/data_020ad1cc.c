/* .data 0x020ad1cc..0x020ad1ec */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020ad1cc[32] = {
    100, 97, 116, 97, 47, 101, 110, 101, 109, 121, 47, 100,
    111, 115, 117, 110, 101, 47, 100, 111, 115, 117, 110, 101,
    46, 98, 109, 100, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
