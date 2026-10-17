/* .data 0x021369b0..0x021369bc */
extern unsigned char data_ov006_021369cc[];
extern unsigned char data_ov006_021369bc[];
extern unsigned char data_ov006_021369dc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021369b0[3] = {
    (unsigned int)&data_ov006_021369cc, (unsigned int)&data_ov006_021369bc, (unsigned int)&data_ov006_021369dc
};
#pragma section forcedata end
#pragma pop
