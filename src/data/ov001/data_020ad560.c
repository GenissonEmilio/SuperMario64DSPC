/* .data 0x020ad560..0x020ad59c */
extern unsigned char data_ov001_020ad5dc[];
extern unsigned char data_ov001_020ab610[];
extern unsigned char data_ov001_020ad4c4[];
extern unsigned char data_ov001_020ad640[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov001_020ad560[15] ;
#pragma section forcedata end
#pragma pop
