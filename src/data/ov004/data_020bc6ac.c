/* .data 0x020bc6ac..0x020bc6c0 */
extern unsigned char data_ov004_020b9e90[];
extern unsigned char data_ov004_020b9f40[];
extern unsigned char data_ov004_020ba000[];
extern unsigned char data_ov004_020b9f30[];
extern unsigned char data_ov004_020b9f18[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov004_020bc6ac[5] ;
#pragma section forcedata end
#pragma pop
