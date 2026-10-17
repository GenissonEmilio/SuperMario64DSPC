/* .data 0x02112980..0x02112998 */
extern unsigned char data_ov024_021118b0[];
extern unsigned char data_ov024_021119e8[];
extern unsigned char data_ov024_02111cbc[];
extern unsigned char data_ov024_021118f4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov024_02112980[6] ;
#pragma section forcedata end
#pragma pop
