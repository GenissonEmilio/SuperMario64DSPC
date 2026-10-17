/* .data 0x02138ae0..0x02138af8 */
extern unsigned char data_ov006_02138ad8[];
extern unsigned char data_ov006_02138af8[];
extern unsigned char data_ov006_02138b60[];
extern unsigned char data_ov006_02138b98[];
extern unsigned char data_ov006_02138b28[];
extern unsigned char data_ov006_02138ad0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02138ae0[6] ;
#pragma section forcedata end
#pragma pop
