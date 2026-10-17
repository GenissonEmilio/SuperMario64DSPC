/* .data 0x020bc648..0x020bc65c */
extern unsigned char data_ov004_020b9e8c[];
extern unsigned char data_ov004_020b9e48[];
extern unsigned char data_ov004_020b9f74[];
extern unsigned char data_ov004_020b9f64[];
extern unsigned char data_ov004_020b9e84[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov004_020bc648[5] ;
#pragma section forcedata end
#pragma pop
