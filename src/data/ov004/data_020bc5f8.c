/* .data 0x020bc5f8..0x020bc60c */
extern unsigned char data_ov004_020b9fd8[];
extern unsigned char data_ov004_020b9fb4[];
extern unsigned char data_ov004_020b9f98[];
extern unsigned char data_ov004_020b9f58[];
extern unsigned char data_ov004_020b9f00[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov004_020bc5f8[5] ;
#pragma section forcedata end
#pragma pop
