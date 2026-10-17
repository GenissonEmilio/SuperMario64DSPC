/* .data 0x0213c5e8..0x0213c5fc */
extern unsigned char data_ov000_020bcaa0[];
extern unsigned char data_ov000_020bdccc[];
extern unsigned char data_ov000_020bd074[];
extern unsigned char data_ov000_020be34c[];
extern unsigned char data_ov000_020bd698[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_0213c5e8[5] ;
#pragma section forcedata end
#pragma pop
