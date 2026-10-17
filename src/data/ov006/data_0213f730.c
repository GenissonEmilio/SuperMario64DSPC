/* .data 0x0213f730..0x0213f74c */
extern unsigned char data_ov006_02133c58[];
extern unsigned char data_ov006_02133c40[];
extern unsigned char data_ov006_02133c10[];
extern unsigned char data_ov006_02133c28[];
extern unsigned char data_ov006_02133bf0[];
extern unsigned char data_ov006_02133be0[];
extern unsigned char data_ov006_02133c00[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_0213f730[7] ;
#pragma section forcedata end
#pragma pop
