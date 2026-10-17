/* .data 0x02113ccc..0x02113cec */
extern unsigned char data_ov020_0211384c[];
extern unsigned char data_ov020_0211389c[];
extern unsigned char data_ov020_0211380c[];
extern unsigned char data_ov020_0211381c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov020_02113ccc[2] ;

extern unsigned int data_ov020_02113cd4[6] ;
#pragma section forcedata end
#pragma pop
