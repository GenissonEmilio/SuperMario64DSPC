/* .data 0x0213ae90..0x0213aea8 */
extern unsigned char data_ov006_0212b8d8[];
extern unsigned char data_ov006_0212b8c8[];
extern unsigned char data_ov006_0212b8ec[];
extern unsigned char data_ov006_0212ba58[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_0213ae90[6] ;
#pragma section forcedata end
#pragma pop
