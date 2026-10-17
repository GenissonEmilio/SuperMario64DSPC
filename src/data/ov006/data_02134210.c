/* .data 0x02134210..0x02134218 */
extern unsigned char data_ov006_021341f8[];
extern unsigned char data_ov006_0213424c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02134210[2] ;
#pragma section forcedata end
#pragma pop
