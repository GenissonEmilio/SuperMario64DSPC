/* .data 0x02090008..0x02090014 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090008[12] = {
    66, 75, 95, 66, 79, 84, 65, 79, 83, 73, 0, 0
};
#pragma section forcedata end
#pragma pop
