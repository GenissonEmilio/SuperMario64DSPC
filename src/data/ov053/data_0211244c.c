/* .data 0x0211244c..0x02112464 */
extern unsigned char data_ov053_021111d0[];
extern unsigned char data_ov053_021111a8[];
extern unsigned char data_ov053_021115ec[];
extern unsigned char data_ov053_02111234[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov053_0211244c[6] ;
#pragma section forcedata end
#pragma pop
