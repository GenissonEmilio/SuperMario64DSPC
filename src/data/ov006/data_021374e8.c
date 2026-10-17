/* .data 0x021374e8..0x021374f4 */
extern unsigned char data_ov006_021374e0[];
extern unsigned char data_ov006_021374d8[];
extern unsigned char data_ov006_021374d0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021374e8[3] = {
    (unsigned int)&data_ov006_021374e0, (unsigned int)&data_ov006_021374d8, (unsigned int)&data_ov006_021374d0
};
#pragma section forcedata end
#pragma pop
