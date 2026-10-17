/* .data 0x02111b20..0x02111b2c */
extern unsigned char data_ov033_02111afc[];
extern unsigned char data_ov033_02111bb0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov033_02111b20[3] ;
#pragma section forcedata end
#pragma pop
