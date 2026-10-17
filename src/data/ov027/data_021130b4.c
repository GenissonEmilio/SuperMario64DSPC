/* .data 0x021130b4..0x021130cc */
extern unsigned char data_ov027_02112b18[];
extern unsigned char data_ov027_02112b14[];
extern unsigned char data_ov027_02112b38[];
extern unsigned char data_ov027_02112b1c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov027_021130b4[6] ;
#pragma section forcedata end
#pragma pop
