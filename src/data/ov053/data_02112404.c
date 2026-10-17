/* .data 0x02112404..0x0211241c */
extern unsigned char data_ov053_021111d8[];
extern unsigned char data_ov053_021111a4[];
extern unsigned char data_ov053_02111b68[];
extern unsigned char data_ov053_02111314[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov053_02112404[6] ;
#pragma section forcedata end
#pragma pop
