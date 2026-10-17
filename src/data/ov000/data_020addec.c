/* .data 0x020addec..0x020ade0c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020addec[32] = {
    100, 97, 116, 97, 47, 68, 83, 77, 84, 47, 102, 97,
    99, 101, 95, 100, 101, 109, 111, 95, 121, 111, 115, 104,
    105, 46, 98, 116, 112, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
