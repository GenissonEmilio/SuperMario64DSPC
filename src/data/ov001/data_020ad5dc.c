/* .data 0x020ad5dc..0x020ad620 */
extern unsigned char data_ov001_020ad4b4[];
extern unsigned char data_ov001_020ab608[];
extern unsigned char data_ov001_020ab60c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov001_020ad5dc[17] ;
#pragma section forcedata end
#pragma pop
