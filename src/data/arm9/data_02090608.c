/* .data 0x02090608..0x02090618 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090608[16] = {
    80, 69, 78, 71, 85, 73, 78, 95, 82, 65, 67, 69,
    82, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
