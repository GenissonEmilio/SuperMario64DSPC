/* .data 0x021338c4..0x021338d0 */
extern unsigned char data_ov006_02133890[];
extern unsigned char data_ov006_02133898[];
extern unsigned char data_ov006_021339bc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_021338c4[3] ;
#pragma section forcedata end
#pragma pop
