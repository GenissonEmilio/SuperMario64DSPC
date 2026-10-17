/* .data 0x0213db84..0x0213db9c */
extern unsigned char data_ov006_0212ec58[];
extern unsigned char data_ov006_0212ec50[];
extern unsigned char data_ov006_0212ebf0[];
extern unsigned char data_ov006_0212ec48[];
extern unsigned char data_ov006_0212ec40[];
extern unsigned char data_ov006_0212ebe8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213db84[6] = {
    (unsigned int)&data_ov006_0212ec58, (unsigned int)&data_ov006_0212ec50, (unsigned int)&data_ov006_0212ebf0, (unsigned int)&data_ov006_0212ec48, (unsigned int)&data_ov006_0212ec40, (unsigned int)&data_ov006_0212ebe8
};
#pragma section forcedata end
#pragma pop
