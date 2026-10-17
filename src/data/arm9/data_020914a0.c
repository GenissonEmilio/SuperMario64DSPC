/* .data 0x020914a0..0x020914a8 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_020914a0[8] = {
    42, 69, 82, 82, 79, 82, 42, 0
};
#pragma section forcedata end
#pragma pop
