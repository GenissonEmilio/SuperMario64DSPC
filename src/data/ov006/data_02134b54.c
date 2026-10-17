/* .data 0x02134b54..0x02134b60 */
extern unsigned char data_ov006_02134cc8[];
extern unsigned char data_ov006_02134bc0[];
extern unsigned char data_ov006_02134ce0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02134b54[3] ;
#pragma section forcedata end
#pragma pop
