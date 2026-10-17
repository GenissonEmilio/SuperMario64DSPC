/* .data 0x020bc300..0x020bc314 */
extern unsigned char data_ov004_020b9ea4[];
extern unsigned char data_ov004_020b9f10[];
extern unsigned char data_ov004_020b9f70[];
extern unsigned char data_ov004_020b9f80[];
extern unsigned char data_ov004_020b9fc0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov004_020bc300[5] ;
#pragma section forcedata end
#pragma pop
