/* .data 0x02137a48..0x02137a6c */
extern unsigned char data_ov006_02137a58[];
extern unsigned char data_ov006_02137a50[];
extern unsigned char data_ov006_02137a48[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov006_02137a58[8] ;

extern unsigned char data_ov006_02137a50[8] ;

extern unsigned char data_ov006_02137a48[8] ;

extern unsigned int data_ov006_02137a60[3] ;
#pragma section forcedata end
#pragma pop
