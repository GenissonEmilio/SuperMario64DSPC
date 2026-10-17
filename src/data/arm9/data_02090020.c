/* .data 0x02090020..0x0209002c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090020[12] = {
    66, 75, 95, 82, 79, 84, 69, 66, 65, 82, 0, 0
};
#pragma section forcedata end
#pragma pop
