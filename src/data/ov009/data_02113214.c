/* .data 0x02113214..0x021132ec */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov009_02113214[20] = {
    50, 0, 16, 9, 155, 0, 80, 15, 0, 0, 0, 64,
    0, 128, 2, 0, 39, 1, 26, 9
};

extern unsigned char data_ov009_02113228[196] ;
#pragma section forcedata end
#pragma pop
