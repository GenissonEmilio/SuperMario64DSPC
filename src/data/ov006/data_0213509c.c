/* .data 0x0213509c..0x021350a8 */
extern unsigned char data_ov006_021350b8[];
extern unsigned char data_ov006_021350a8[];
extern unsigned char data_ov006_021350c8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_0213509c[3] ;
#pragma section forcedata end
#pragma pop
