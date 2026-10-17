/* .data 0x02113170..0x0211317c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov022_02113170[12] = {
    0, 0, 2, 255, 255, 127, 2, 0, 2, 255, 255, 127
};
#pragma section forcedata end
#pragma pop
