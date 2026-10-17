/* .data 0x0213c844..0x0213c85c */
extern unsigned char data_ov006_0212e584[];
extern unsigned char data_ov006_0212e580[];
extern unsigned char data_ov006_0212e62c[];
extern unsigned char data_ov006_0212e5a8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213c844[6] = {
    120, (unsigned int)&data_ov006_0212e584, (unsigned int)&data_ov006_0212e580, (unsigned int)&data_ov006_0212e62c, 1, (unsigned int)&data_ov006_0212e5a8
};
#pragma section forcedata end
#pragma pop
