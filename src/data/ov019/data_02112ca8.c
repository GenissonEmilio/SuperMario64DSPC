/* .data 0x02112ca8..0x02112cc4 */
extern unsigned char data_ov019_02112cc4[];
extern unsigned char data_ov019_02112bdc[];
extern unsigned char data_ov019_02112b84[];
extern unsigned char data_ov019_02112bf8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov019_02112ca8[7] ;
#pragma section forcedata end
#pragma pop
