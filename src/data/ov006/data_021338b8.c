/* .data 0x021338b8..0x021338c4 */
extern unsigned char data_ov006_021338ec[];
extern unsigned char data_ov006_0213390c[];
extern unsigned char data_ov006_0213399c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_021338b8[3] = {
    (unsigned int)&data_ov006_021338ec, (unsigned int)&data_ov006_0213390c, (unsigned int)&data_ov006_0213399c
};
#pragma section forcedata end
#pragma pop
