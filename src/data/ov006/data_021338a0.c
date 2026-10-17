/* .data 0x021338a0..0x021338ac */
extern unsigned char data_ov006_0213394c[];
extern unsigned char data_ov006_021338dc[];
extern unsigned char data_ov006_0213397c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_021338a0[3] ;
#pragma section forcedata end
#pragma pop
