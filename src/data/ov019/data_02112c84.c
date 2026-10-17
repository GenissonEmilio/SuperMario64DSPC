/* .data 0x02112c84..0x02112ca8 */
extern unsigned char data_ov019_02112e24[];
extern unsigned char data_ov019_02112b88[];
extern unsigned char data_ov019_02112be8[];
extern unsigned char data_ov019_02112b80[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov019_02112c84[4] = {
    2, 86, 0, 0
};

extern unsigned int data_ov019_02112c88[8] ;
#pragma section forcedata end
#pragma pop
