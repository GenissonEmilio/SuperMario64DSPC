/* .data 0x02090810..0x02090824 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090810[20] = {
    80, 69, 78, 71, 85, 73, 78, 95, 68, 69, 70, 69,
    78, 68, 69, 82, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
