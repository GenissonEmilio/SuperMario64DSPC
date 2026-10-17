/* .data 0x020abc30..0x020abc4c */
#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov000_020abc30[28] ;
#pragma section forcedata end
#pragma pop
