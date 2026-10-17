/* .data 0x02111814..0x02111824 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov013_02111814[16] = {
    63, 72, 175, 251, 202, 8, 41, 10, 60, 232, 88, 250,
    17, 10, 161, 7
};
#pragma section forcedata end
#pragma pop
