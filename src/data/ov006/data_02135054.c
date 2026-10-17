/* .data 0x02135054..0x0213509c */
extern unsigned char data_ov006_0213505c[];
extern unsigned char data_ov006_0213507c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02135054[2] = {
    (unsigned int)&data_ov006_0213505c, (unsigned int)&data_ov006_0213507c
};

unsigned char data_ov006_0213505c[32] = {
    248, 64, 192, 129, 128, 0, 0, 0, 248, 64, 224, 129,
    132, 0, 0, 0, 248, 64, 0, 128, 136, 0, 0, 0,
    248, 64, 32, 128, 140, 0, 255, 255
};

unsigned char data_ov006_0213507c[32] = {
    248, 64, 192, 129, 192, 0, 0, 0, 248, 64, 224, 129,
    196, 0, 0, 0, 248, 64, 0, 128, 200, 0, 0, 0,
    248, 64, 32, 128, 204, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
