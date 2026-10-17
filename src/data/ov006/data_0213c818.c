/* .data 0x0213c818..0x0213c82c */
extern unsigned char data_ov006_0213c6d4[];
extern unsigned char data_ov006_0213c7bc[];
extern unsigned char data_ov006_0213c7e4[];
extern unsigned char data_ov006_0213c804[];
extern unsigned char data_ov006_0213c82c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213c818[5] = {
    (unsigned int)&data_ov006_0213c6d4, (unsigned int)&data_ov006_0213c7bc, (unsigned int)&data_ov006_0213c7e4, (unsigned int)&data_ov006_0213c804, (unsigned int)&data_ov006_0213c82c
};
#pragma section forcedata end
#pragma pop
