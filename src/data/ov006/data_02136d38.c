/* .data 0x02136d38..0x02136d98 */
extern unsigned char data_ov006_02136d38[];
extern unsigned char data_ov006_02136d50[];
extern unsigned char data_ov006_02136d60[];
extern unsigned char data_ov006_02136d78[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov006_02136d38[8] = {
    224, 128, 240, 209, 28, 0, 255, 255
};

unsigned char data_ov006_02136d50[16] = {
    225, 0, 249, 65, 22, 0, 0, 0, 224, 128, 240, 209,
    28, 0, 255, 255
};

unsigned int data_ov006_02136d40[4] = {
    (unsigned int)&data_ov006_02136d38, (unsigned int)&data_ov006_02136d50, (unsigned int)&data_ov006_02136d60, (unsigned int)&data_ov006_02136d78
};

unsigned char data_ov006_02136d60[24] = {
    240, 0, 249, 65, 22, 0, 0, 0, 225, 0, 249, 65,
    22, 0, 0, 0, 224, 128, 240, 209, 28, 0, 255, 255
};

unsigned char data_ov006_02136d78[32] = {
    255, 0, 249, 65, 22, 0, 0, 0, 240, 0, 249, 65,
    22, 0, 0, 0, 225, 0, 249, 65, 22, 0, 0, 0,
    224, 128, 240, 209, 28, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
