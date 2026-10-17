/* .data 0x0213dd4c..0x0213dd58 */
extern unsigned char data_ov006_0213df10[];
extern unsigned char data_ov006_0213e10c[];
extern unsigned char data_ov006_0213e1b4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213dd4c[3] = {
    (unsigned int)&data_ov006_0213df10, (unsigned int)&data_ov006_0213e10c, (unsigned int)&data_ov006_0213e1b4
};
#pragma section forcedata end
#pragma pop
