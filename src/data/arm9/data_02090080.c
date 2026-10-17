/* .data 0x02090080..0x0209008c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090080[12] = {
    83, 65, 78, 66, 79, 95, 66, 79, 68, 89, 0, 0
};
#pragma section forcedata end
#pragma pop
