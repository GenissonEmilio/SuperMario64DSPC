/* .data 0x02123040..0x0212304c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov073_02123040[12] = {
    0, 0, 0, 0, 0, 0, 250, 255, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
