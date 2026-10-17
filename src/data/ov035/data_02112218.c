/* .data 0x02112218..0x02112278 */
extern unsigned char data_ov035_021124e4[];
extern unsigned char data_ov035_021123ec[];
extern unsigned char data_ov035_0211207c[];
extern unsigned char data_ov035_021122a8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov035_02112238[32] ;

extern unsigned int data_ov035_02112218[8] ;

extern unsigned char data_ov035_02112258[32] ;
#pragma section forcedata end
#pragma pop
