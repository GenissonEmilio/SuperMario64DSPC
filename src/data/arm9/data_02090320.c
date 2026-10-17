/* .data 0x02090320..0x0209032c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090320[12] = {
    67, 84, 95, 77, 69, 67, 72, 65, 48, 52, 76, 0
};
#pragma section forcedata end
#pragma pop
