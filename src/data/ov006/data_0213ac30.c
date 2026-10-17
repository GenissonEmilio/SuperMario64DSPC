/* .data 0x0213ac30..0x0213ac3c */
extern unsigned char data_ov006_0213ac34[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213ac30[1] = {
    (unsigned int)&data_ov006_0213ac34
};

unsigned char data_ov006_0213ac34[8] = {
    224, 0, 224, 193, 24, 80, 255, 255
};
#pragma section forcedata end
#pragma pop
