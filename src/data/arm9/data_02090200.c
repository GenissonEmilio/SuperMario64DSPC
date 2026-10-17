/* .data 0x02090200..0x02090208 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090200[8] = {
    77, 67, 95, 77, 69, 84, 65, 76
};
#pragma section forcedata end
#pragma pop
