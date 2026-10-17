/* .data 0x02112efc..0x02112f14 */
extern unsigned char data_ov018_02112a78[];
extern unsigned char data_ov018_02112a74[];
extern unsigned char data_ov018_02112a98[];
extern unsigned char data_ov018_02112a7c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov018_02112efc[6] ;
#pragma section forcedata end
#pragma pop
