/* .data 0x02133f00..0x02133f18 */
extern unsigned char data_ov006_02133f08[];
extern unsigned char data_ov006_02133f00[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov006_02133f08[8] ;

extern unsigned char data_ov006_02133f00[8] ;

extern unsigned int data_ov006_02133f10[2] ;
#pragma section forcedata end
#pragma pop
