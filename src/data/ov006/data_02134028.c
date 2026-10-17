/* .data 0x02134028..0x0213406c */
extern unsigned char data_ov006_0213402c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02134028[1] = {
    (unsigned int)&data_ov006_0213402c
};

unsigned char data_ov006_0213402c[64] = {
    204, 0, 220, 193, 8, 0, 0, 0, 204, 128, 28, 64,
    16, 0, 0, 0, 236, 128, 28, 64, 144, 0, 0, 0,
    12, 64, 220, 193, 8, 1, 0, 0, 12, 128, 28, 64,
    16, 1, 0, 0, 44, 64, 220, 65, 136, 1, 0, 0,
    44, 64, 252, 65, 140, 1, 0, 0, 44, 0, 28, 0,
    144, 1, 255, 255
};
#pragma section forcedata end
#pragma pop
