/* .data 0x0213aba8..0x0213abd8 */
extern unsigned char data_ov006_0213abc0[];
extern unsigned char data_ov006_0213abb8[];
extern unsigned char data_ov006_0213abb0[];
extern unsigned char data_ov006_0213aba8[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov006_0213abc0[8] = {
    240, 0, 240, 129, 132, 64, 255, 255
};

unsigned char data_ov006_0213abb8[8] = {
    240, 0, 240, 129, 136, 80, 255, 255
};

unsigned char data_ov006_0213abb0[8] = {
    240, 0, 240, 129, 140, 96, 255, 255
};

unsigned char data_ov006_0213aba8[8] = {
    240, 0, 240, 129, 128, 112, 255, 255
};

unsigned int data_ov006_0213abc8[4] = {
    (unsigned int)&data_ov006_0213abc0, (unsigned int)&data_ov006_0213abb8, (unsigned int)&data_ov006_0213abb0, (unsigned int)&data_ov006_0213aba8
};
#pragma section forcedata end
#pragma pop
