/* .data 0x021338d0..0x021338dc */
extern unsigned char data_ov006_0213391c[];
extern unsigned char data_ov006_021338fc[];
extern unsigned char data_ov006_021339dc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021338d0[3] = {
    (unsigned int)&data_ov006_0213391c, (unsigned int)&data_ov006_021338fc, (unsigned int)&data_ov006_021339dc
};
#pragma section forcedata end
#pragma pop
