/* .data 0x02111824..0x02111834 */
extern unsigned char data_ov013_021119cc[];
extern unsigned char data_ov013_02111814[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov013_02111824[4] ;
#pragma section forcedata end
#pragma pop
