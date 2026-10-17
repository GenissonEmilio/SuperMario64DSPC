/* .data 0x02112c44..0x02112ca8 */
extern unsigned char data_ov056_021115d0[];
extern unsigned char data_ov056_02112d44[];
extern unsigned char data_ov056_02112bc8[];
extern unsigned char data_ov056_02112bf8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov056_02112c44[2] ;

extern unsigned int data_ov056_02112c4c[3] ;

extern unsigned int data_ov056_02112c58[4] ;

extern unsigned char data_ov056_02112c68[32] ;

extern unsigned char data_ov056_02112c88[32] ;
#pragma section forcedata end
#pragma pop
