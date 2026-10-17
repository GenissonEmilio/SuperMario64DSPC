/* .data 0x021123f4..0x02112404 */
extern unsigned char data_ov010_0211223c[];
extern unsigned char data_ov010_02112948[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov010_021123f4[4] ;
#pragma section forcedata end
#pragma pop
