/* .data 0x0209a438..0x0209a444 */
extern unsigned char data_0209a470[];
extern unsigned char data_0209a460[];
extern unsigned char data_0209a424[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_0209a438[3] ;
#pragma section forcedata end
#pragma pop
