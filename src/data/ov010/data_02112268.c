/* .data 0x02112268..0x02112278 */
extern unsigned char data_ov010_021122d8[];
extern unsigned char data_ov010_02112318[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov010_02112268[4] ;
#pragma section forcedata end
#pragma pop
