/* .data 0x021343a0..0x021343c4 */
extern unsigned char data_ov006_02134404[];
extern unsigned char data_ov006_021343a0[];
extern unsigned char data_ov006_021343e4[];
extern unsigned char data_ov006_021343c4[];
extern unsigned char data_ov006_02134444[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov006_021343a0[16] ;

extern unsigned int data_ov006_021343b0[5] ;
#pragma section forcedata end
#pragma pop
