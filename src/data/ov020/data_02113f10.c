/* .data 0x02113f10..0x02113f4c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov020_02113f10[16] = {
    49, 1, 188, 2, 164, 6, 32, 3, 0, 0, 0, 0,
    0, 0, 0, 255
};

extern unsigned char data_ov020_02113f20[44] ;
#pragma section forcedata end
#pragma pop
