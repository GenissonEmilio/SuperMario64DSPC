/* .data 0x020abd64..0x020abd78 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov000_020abd64[20] = {
    100, 97, 116, 97, 47, 112, 108, 97, 121, 101, 114, 47,
    89, 95, 101, 103, 103, 95, 119, 97
};
#pragma section forcedata end
#pragma pop
