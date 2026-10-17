/* .data 0x02112b84..0x02112ba8 */
extern unsigned char data_ov009_02112b6c[];
extern unsigned char data_ov009_02112bac[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov009_02112b84[4] = {
    116, 0, 0, 0
};

extern unsigned int data_ov009_02112b88[3] ;

extern unsigned char data_ov009_02112b94[20] ;
#pragma section forcedata end
#pragma pop
