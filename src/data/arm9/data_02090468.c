/* .data 0x02090468..0x02090478 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090468[16] = {
    66, 75, 95, 66, 73, 76, 76, 66, 79, 65, 82, 68,
    0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
