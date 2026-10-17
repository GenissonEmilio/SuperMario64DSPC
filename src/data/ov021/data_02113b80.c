/* .data 0x02113b80..0x02113b90 */
extern unsigned char data_ov021_02113768[];
extern unsigned char data_ov021_021137fc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov021_02113b80[4] ;
#pragma section forcedata end
#pragma pop
