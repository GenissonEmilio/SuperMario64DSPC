/* .data 0x02133e10..0x02133e1c */
extern unsigned char data_ov006_02133e08[];
extern unsigned char data_ov006_02133e3c[];
extern unsigned char data_ov006_02133e1c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02133e10[3] ;
#pragma section forcedata end
#pragma pop
