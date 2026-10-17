/* .data 0x0213a338..0x0213a35c */
extern unsigned char data_ov006_0213a33c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_0213a338[1] = {
    (unsigned int)&data_ov006_0213a33c
};

unsigned char data_ov006_0213a33c[32] = {
    248, 64, 236, 129, 155, 0, 0, 0, 248, 128, 12, 0,
    159, 0, 0, 0, 240, 0, 224, 129, 27, 0, 0, 0,
    240, 0, 0, 128, 28, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
