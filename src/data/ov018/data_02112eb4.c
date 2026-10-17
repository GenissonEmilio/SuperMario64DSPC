/* .data 0x02112eb4..0x02112ec0 */
extern unsigned char data_ov018_02112ea0[];
extern unsigned char data_ov018_02112efc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov018_02112eb4[3] ;
#pragma section forcedata end
#pragma pop
