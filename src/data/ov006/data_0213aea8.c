/* .data 0x0213aea8..0x0213aec0 */
extern unsigned char data_ov006_0212b8d0[];
extern unsigned char data_ov006_0212b8c0[];
extern unsigned char data_ov006_0212c02c[];
extern unsigned char data_ov006_0212ba90[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213aea8[6] = {
    58, (unsigned int)&data_ov006_0212b8d0, (unsigned int)&data_ov006_0212b8c0, (unsigned int)&data_ov006_0212c02c, 2, (unsigned int)&data_ov006_0212ba90
};
#pragma section forcedata end
#pragma pop
