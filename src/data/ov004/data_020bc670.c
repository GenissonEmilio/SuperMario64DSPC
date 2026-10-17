/* .data 0x020bc670..0x020bc684 */
extern unsigned char data_ov004_020b9f78[];
extern unsigned char data_ov004_020b9fec[];
extern unsigned char data_ov004_020b9f08[];
extern unsigned char data_ov004_020b9ed0[];
extern unsigned char data_ov004_020b9f84[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov004_020bc670[5] ;
#pragma section forcedata end
#pragma pop
