/* .data 0x0213a17c..0x0213a274 */
extern unsigned char data_ov006_02139dd4[];
extern unsigned char data_ov006_02139e0c[];
extern unsigned char data_ov006_02139e2c[];
extern unsigned char data_ov006_0213a18c[];
extern unsigned char data_ov006_0213a01c[];
extern unsigned char data_ov006_0213a064[];
extern unsigned char data_ov006_0213a0ac[];
extern unsigned char data_ov006_0213a0f4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov006_0213a17c[16] = {
    252, 0, 15, 0, 206, 5, 0, 0, 234, 0, 1, 128,
    28, 37, 255, 255
};

unsigned char data_ov006_0213a18c[96] = {
    240, 0, 224, 129, 152, 53, 0, 0, 230, 0, 230, 65,
    118, 53, 0, 0, 204, 0, 223, 129, 8, 5, 0, 0,
    204, 128, 255, 129, 12, 5, 0, 0, 204, 128, 15, 64,
    14, 5, 0, 0, 236, 64, 223, 129, 136, 5, 0, 0,
    236, 0, 255, 65, 140, 5, 0, 0, 236, 128, 15, 0,
    142, 5, 0, 0, 252, 64, 223, 65, 200, 5, 0, 0,
    252, 64, 255, 1, 204, 5, 0, 0, 252, 0, 15, 0,
    206, 5, 0, 0, 234, 0, 1, 128, 28, 37, 255, 255
};

unsigned int data_ov006_0213a1ec[34] = {
    (unsigned int)&data_ov006_02139dd4, 1, (unsigned int)&data_ov006_02139e0c, 3, (unsigned int)&data_ov006_02139e2c, 3, (unsigned int)&data_ov006_0213a18c, 3,
    (unsigned int)&data_ov006_0213a01c, 45, (unsigned int)&data_ov006_0213a064, 3, (unsigned int)&data_ov006_0213a0ac, 3, (unsigned int)&data_ov006_0213a0f4, 3,
    (unsigned int)&data_ov006_0213a0ac, 3, (unsigned int)&data_ov006_0213a064, 3, (unsigned int)&data_ov006_0213a01c, 7, (unsigned int)&data_ov006_0213a064, 3,
    (unsigned int)&data_ov006_0213a0ac, 3, (unsigned int)&data_ov006_0213a0f4, 3, (unsigned int)&data_ov006_0213a0ac, 3, (unsigned int)&data_ov006_0213a064, 3,
    (unsigned int)&data_ov006_0213a01c, 0
};
#pragma section forcedata end
#pragma pop
