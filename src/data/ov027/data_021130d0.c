/* .data 0x021130d0..0x021130e8 */
extern unsigned char data_ov027_02112ff8[];
extern unsigned char data_ov027_02113018[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov027_021130d0[6] ;
#pragma section forcedata end
#pragma pop
