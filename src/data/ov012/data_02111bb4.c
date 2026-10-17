/* .data 0x02111bb4..0x02111bbc */
extern unsigned char data_ov012_02111bac[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov012_02111bb4[2] ;
#pragma section forcedata end
#pragma pop
