/* .data 0x020ab870..0x020ab888 */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov000_020ab870[8] ;

extern unsigned char data_ov000_020ab878[16] ;
#pragma section forcedata end
#pragma pop
