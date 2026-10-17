/* .data 0x02138180..0x02138190 */
extern unsigned char data_ov006_021381c0[];
extern unsigned char data_ov006_021381a8[];
extern unsigned char data_ov006_02138190[];
extern unsigned char data_ov006_021381d8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02138180[4] ;
#pragma section forcedata end
#pragma pop
