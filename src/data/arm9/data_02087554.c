/* .data 0x02087554..0x0208755c */
extern unsigned char data_02087f08[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_02087554[2] ;
#pragma section forcedata end
#pragma pop
