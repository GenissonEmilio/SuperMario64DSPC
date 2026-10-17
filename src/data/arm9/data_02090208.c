/* .data 0x02090208..0x0209020c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_02090208[4] = {
    78, 69, 84, 0
};
#pragma section forcedata end
#pragma pop
