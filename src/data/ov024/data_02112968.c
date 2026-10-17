/* .data 0x02112968..0x02112980 */
extern unsigned char data_ov024_021118b4[];
extern unsigned char data_ov024_021118ac[];
extern unsigned char data_ov024_02111948[];
extern unsigned char data_ov024_021118bc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov024_02112968[6] ;
#pragma section forcedata end
#pragma pop
