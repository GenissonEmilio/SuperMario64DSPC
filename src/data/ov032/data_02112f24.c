/* .data 0x02112f24..0x02112f4c */
extern unsigned char data_ov032_021128f8[];
extern unsigned char data_ov032_021128f4[];
extern unsigned char data_ov032_02112938[];
extern unsigned char data_ov032_02112900[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned char data_ov032_02112f2c[8] ;

extern unsigned char data_ov032_02112f24[8] ;

extern unsigned int data_ov032_02112f34[6] ;
#pragma section forcedata end
#pragma pop
