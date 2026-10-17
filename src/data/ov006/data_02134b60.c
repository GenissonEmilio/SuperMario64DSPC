/* .data 0x02134b60..0x02134b6c */
extern unsigned char data_ov006_02134c98[];
extern unsigned char data_ov006_02134b90[];
extern unsigned char data_ov006_02134ba8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02134b60[3] ;
#pragma section forcedata end
#pragma pop
