/* .data 0x02090068..0x02090074 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090068[12] = {
    70, 76, 95, 85, 75, 73, 89, 85, 75, 65, 0, 0
};
#pragma section forcedata end
#pragma pop
