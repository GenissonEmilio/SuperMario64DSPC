/* .data 0x021128a8..0x021128b4 */
extern unsigned char data_ov024_021128a0[];
extern unsigned char data_ov024_02112980[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov024_021128a8[3] ;
#pragma section forcedata end
#pragma pop
