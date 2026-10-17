/* .data 0x02090230..0x0209023c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090230[12] = {
    67, 76, 79, 67, 75, 95, 83, 72, 79, 82, 84, 0
};
#pragma section forcedata end
#pragma pop
