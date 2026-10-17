/* .data 0x02090344..0x02090350 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090344[12] = {
    70, 80, 65, 75, 85, 78, 95, 66, 65, 76, 76, 0
};
#pragma section forcedata end
#pragma pop
