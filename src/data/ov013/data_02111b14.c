/* .data 0x02111b14..0x02111b34 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov013_02111b14[32] = {
    42, 0, 226, 0, 95, 5, 15, 254, 0, 0, 86, 149,
    0, 0, 51, 67, 42, 0, 43, 4, 251, 4, 185, 250,
    0, 0, 171, 170, 0, 0, 85, 64
};
#pragma section forcedata end
#pragma pop
