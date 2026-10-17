/* .data 0x021338ac..0x021338b8 */
extern unsigned char data_ov006_0213392c[];
extern unsigned char data_ov006_0213393c[];
extern unsigned char data_ov006_0213395c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021338ac[3] = {
    (unsigned int)&data_ov006_0213392c, (unsigned int)&data_ov006_0213393c, (unsigned int)&data_ov006_0213395c
};
#pragma section forcedata end
#pragma pop
