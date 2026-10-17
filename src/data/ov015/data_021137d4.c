/* .data 0x021137d4..0x021137f8 */
extern unsigned char data_ov015_02113884[];
extern unsigned char data_ov015_02113440[];
extern unsigned char data_ov015_02113804[];
extern unsigned char data_ov015_021134f0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov015_021137d4[4] ;

extern unsigned int data_ov015_021137e4[5] ;
#pragma section forcedata end
#pragma pop
