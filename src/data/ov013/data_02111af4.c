/* .data 0x02111af4..0x02111b14 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov013_02111af4[32] = {
    42, 0, 109, 253, 20, 5, 236, 254, 0, 0, 0, 128,
    0, 0, 34, 10, 42, 0, 29, 250, 97, 5, 24, 254,
    0, 0, 170, 106, 0, 0, 51, 65
};
#pragma section forcedata end
#pragma pop
