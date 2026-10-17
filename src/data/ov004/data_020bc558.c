/* .data 0x020bc558..0x020bc56c */
extern unsigned char data_ov004_020b9fc8[];
extern unsigned char data_ov004_020b9e14[];
extern unsigned char data_ov004_020b9e2c[];
extern unsigned char data_ov004_020b9ee0[];
extern unsigned char data_ov004_020b9e30[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov004_020bc558[5] ;
#pragma section forcedata end
#pragma pop
