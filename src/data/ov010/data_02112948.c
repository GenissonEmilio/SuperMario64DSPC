/* .data 0x02112948..0x02112a6c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov010_02112948[32] = {
    0, 0, 24, 252, 249, 255, 180, 2, 0, 0, 0, 128,
    0, 0, 0, 0, 0, 0, 80, 251, 206, 255, 188, 2,
    0, 0, 0, 128, 0, 0, 0, 0
};

extern unsigned char data_ov010_02112968[76] ;

extern unsigned char data_ov010_021129b4[184] ;
#pragma section forcedata end
#pragma pop
