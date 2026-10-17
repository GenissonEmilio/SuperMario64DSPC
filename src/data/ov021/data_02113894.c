/* .data 0x02113894..0x021138a8 */
extern unsigned char data_ov021_02112f18[];
extern unsigned char data_ov021_02112f14[];
extern unsigned char data_ov021_02112f58[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov021_02113894[5] ;
#pragma section forcedata end
#pragma pop
