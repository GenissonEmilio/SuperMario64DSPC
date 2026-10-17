/* .data 0x02090314..0x02090320 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090314[12] = {
    83, 76, 95, 73, 67, 69, 66, 76, 79, 67, 75, 0
};
#pragma section forcedata end
#pragma pop
