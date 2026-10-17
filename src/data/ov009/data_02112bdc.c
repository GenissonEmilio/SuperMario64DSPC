/* .data 0x02112bdc..0x02112bec */
extern unsigned char data_ov009_02112e7c[];
extern unsigned char data_ov009_02112b74[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov009_02112bdc[4] = {
    (unsigned int)&data_ov009_02112e7c, (unsigned int)&data_ov009_02112b74, 0x7950797, 0x7990798
};
#pragma section forcedata end
#pragma pop
