/* .data 0x02087534..0x0208753c */
extern unsigned char data_02087e60[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_02087534[2] ;
#pragma section forcedata end
#pragma pop
