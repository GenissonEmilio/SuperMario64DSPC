/* .data 0x02134ef0..0x02134f08 */
extern unsigned char data_ov006_02134ef8[];
extern unsigned char data_ov006_02134ef0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov006_02134ef8[8] ;

extern unsigned char data_ov006_02134ef0[8] ;

extern unsigned int data_ov006_02134f00[2] ;
#pragma section forcedata end
#pragma pop
