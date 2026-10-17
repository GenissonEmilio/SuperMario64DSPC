/* .data 0x02090308..0x02090314 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090308[12] = {
    87, 76, 95, 80, 79, 76, 69, 76, 73, 70, 84, 0
};
#pragma section forcedata end
#pragma pop
