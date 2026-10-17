/* .data 0x020b9090..0x020b90bc */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020b9090[44] = {
    100, 97, 116, 97, 47, 68, 83, 77, 84, 47, 69, 85,
    82, 47, 102, 97, 99, 101, 95, 100, 101, 109, 111, 95,
    98, 105, 103, 95, 121, 111, 115, 104, 105, 115, 116, 97,
    114, 95, 85, 46, 98, 99, 97, 0
};
#pragma section forcedata end
#pragma pop
