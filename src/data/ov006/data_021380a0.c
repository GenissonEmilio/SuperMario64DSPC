/* .data 0x021380a0..0x021380b0 */
extern unsigned char data_ov006_021380e0[];
extern unsigned char data_ov006_021380c8[];
extern unsigned char data_ov006_021380b0[];
extern unsigned char data_ov006_021380f8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_021380a0[4] ;
#pragma section forcedata end
#pragma pop
