/* .data 0x020ad524..0x020ad560 */
extern unsigned char data_ov001_020ad59c[];
extern unsigned char data_ov001_020ab618[];
extern unsigned char data_ov001_020ad4f4[];
extern unsigned char data_ov001_020ad644[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov001_020ad524[15] ;
#pragma section forcedata end
#pragma pop
