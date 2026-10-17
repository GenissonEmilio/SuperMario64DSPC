/* .data 0x02111d34..0x02111d6c */
extern unsigned char data_ov052_02111da4[];
extern unsigned char data_ov052_02111d04[];
extern unsigned char data_ov052_02111d6c[];
extern unsigned char data_ov052_02111c60[];
extern unsigned char data_ov052_02111ce4[];
extern unsigned char data_ov052_02111c64[];
extern unsigned char data_ov052_02111c90[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov052_02111d34[14] ;
#pragma section forcedata end
#pragma pop
