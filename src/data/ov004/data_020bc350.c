/* .data 0x020bc350..0x020bc364 */
extern unsigned char data_ov004_020b9ea8[];
extern unsigned char data_ov004_020b9fcc[];
extern unsigned char data_ov004_020b9f48[];
extern unsigned char data_ov004_020b9eac[];
extern unsigned char data_ov004_020b9fb0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov004_020bc350[5] ;
#pragma section forcedata end
#pragma pop
