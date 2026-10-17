/* .data 0x02090224..0x02090230 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090224[12] = {
    77, 71, 95, 80, 65, 67, 72, 73, 78, 75, 79, 0
};
#pragma section forcedata end
#pragma pop
