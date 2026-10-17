/* .data 0x02090104..0x02090110 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090104[12] = {
    67, 84, 95, 77, 69, 67, 72, 65, 48, 55, 0, 0
};
#pragma section forcedata end
#pragma pop
