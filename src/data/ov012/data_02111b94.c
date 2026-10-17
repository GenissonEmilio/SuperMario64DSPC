/* .data 0x02111b94..0x02111b9c */
extern unsigned char data_ov012_02111b8c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov012_02111b94[2] ;
#pragma section forcedata end
#pragma pop
