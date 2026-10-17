/* .data 0x0213f6f0..0x0213f6fc */
extern unsigned char data_ov006_0213f54c[];
extern unsigned char data_ov006_0213f544[];
extern unsigned char data_ov006_0213f65c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213f6f0[3] = {
    (unsigned int)&data_ov006_0213f54c, (unsigned int)&data_ov006_0213f544, (unsigned int)&data_ov006_0213f65c
};
#pragma section forcedata end
#pragma pop
