/* .data 0x02090014..0x02090020 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090014[12] = {
    66, 75, 95, 85, 75, 73, 83, 73, 77, 65, 0, 0
};
#pragma section forcedata end
#pragma pop
