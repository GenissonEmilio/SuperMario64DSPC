/* .data 0x02090408..0x02090418 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090408[16] = {
    67, 76, 79, 67, 75, 95, 72, 85, 82, 73, 75, 79,
    0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
