/* .data 0x020bc544..0x020bc558 */
extern unsigned char data_ov004_020b9f88[];
extern unsigned char data_ov004_020b9e60[];
extern unsigned char data_ov004_020b9e00[];
extern unsigned char data_ov004_020b9f90[];
extern unsigned char data_ov004_020b9e5c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov004_020bc544[5] ;
#pragma section forcedata end
#pragma pop
