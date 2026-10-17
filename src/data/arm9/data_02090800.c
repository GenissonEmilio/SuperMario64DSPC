/* .data 0x02090800..0x02090810 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090800[16] = {
    70, 76, 65, 77, 69, 84, 72, 82, 79, 87, 69, 82,
    0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
