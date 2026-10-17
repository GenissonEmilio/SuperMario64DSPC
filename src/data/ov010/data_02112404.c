/* .data 0x02112404..0x0211241c */
extern unsigned char data_ov010_0211261c[];
extern unsigned char data_ov010_02112248[];
extern unsigned char data_ov010_021121c0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov010_02112404[6] ;
#pragma section forcedata end
#pragma pop
