/* .data 0x02090050..0x0209005c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090050[12] = {
    67, 86, 95, 83, 72, 85, 84, 84, 69, 82, 0, 0
};
#pragma section forcedata end
#pragma pop
