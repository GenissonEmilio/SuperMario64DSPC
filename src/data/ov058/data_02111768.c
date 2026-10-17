/* .data 0x02111768..0x02111784 */
extern unsigned char data_ov058_02111920[];
extern unsigned char data_ov058_0211170c[];
extern unsigned char data_ov058_021117a4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov058_02111768[7] ;
#pragma section forcedata end
#pragma pop
