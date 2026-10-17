/* .data 0x02130880..0x0213089c */
extern unsigned char data_ov084_02130178[];
extern unsigned char data_ov084_0213018c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov084_02130880[12] ;

extern unsigned int data_ov084_0213088c[4] ;
#pragma section forcedata end
#pragma pop
