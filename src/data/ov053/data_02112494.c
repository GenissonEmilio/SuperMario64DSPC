/* .data 0x02112494..0x021124ac */
extern unsigned char data_ov053_021111dc[];
extern unsigned char data_ov053_021111b0[];
extern unsigned char data_ov053_02111750[];
extern unsigned char data_ov053_021112a4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov053_02112494[6] ;
#pragma section forcedata end
#pragma pop
