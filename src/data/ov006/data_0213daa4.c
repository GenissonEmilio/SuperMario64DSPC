/* .data 0x0213daa4..0x0213daac */
extern unsigned char data_ov006_0212ec8c[];
extern unsigned char data_ov006_0212ec9c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213daa4[2] = {
    (unsigned int)&data_ov006_0212ec8c, (unsigned int)&data_ov006_0212ec9c
};
#pragma section forcedata end
#pragma pop
