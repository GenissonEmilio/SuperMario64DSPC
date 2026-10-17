/* .data 0x0213def0..0x0213df10 */
extern unsigned char data_ov006_0213e174[];
extern unsigned char data_ov006_0213e094[];
extern unsigned char data_ov006_0213e0bc[];
extern unsigned char data_ov006_0213dda4[];
extern unsigned char data_ov006_0213e0e4[];
extern unsigned char data_ov006_0213ddf4[];
extern unsigned char data_ov006_0213ddb4[];
extern unsigned char data_ov006_0213dc94[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213def0[8] = {
    (unsigned int)&data_ov006_0213e174, (unsigned int)&data_ov006_0213e094, (unsigned int)&data_ov006_0213e0bc, (unsigned int)&data_ov006_0213dda4, (unsigned int)&data_ov006_0213e0e4, (unsigned int)&data_ov006_0213ddf4, (unsigned int)&data_ov006_0213ddb4, (unsigned int)&data_ov006_0213dc94
};
#pragma section forcedata end
#pragma pop
