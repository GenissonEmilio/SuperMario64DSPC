/* .data 0x020bc2d8..0x020bc2ec */
extern unsigned char data_ov004_020b9f0c[];
extern unsigned char data_ov004_020b9fa8[];
extern unsigned char data_ov004_020b9f14[];
extern unsigned char data_ov004_020b9ff8[];
extern unsigned char data_ov004_020ba020[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov004_020bc2d8[5] ;
#pragma section forcedata end
#pragma pop
