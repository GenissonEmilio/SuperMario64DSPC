/* .data 0x02136bd4..0x02136cd4 */
extern unsigned char data_ov006_02136c7c[];
extern unsigned char data_ov006_02136c34[];
extern unsigned char data_ov006_02136be4[];
extern unsigned char data_ov006_02136c0c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02136bd4[4] = {
    (unsigned int)&data_ov006_02136c7c, (unsigned int)&data_ov006_02136c34, (unsigned int)&data_ov006_02136be4, (unsigned int)&data_ov006_02136c0c
};

unsigned char data_ov006_02136c0c[40] = {
    241, 0, 254, 1, 88, 80, 0, 0, 229, 0, 235, 1,
    120, 80, 0, 0, 225, 0, 4, 0, 89, 80, 0, 0,
    234, 0, 12, 0, 120, 80, 0, 0, 223, 0, 246, 1,
    89, 80, 255, 255
};

unsigned char data_ov006_02136be4[40] = {
    238, 0, 249, 65, 24, 80, 0, 0, 230, 0, 234, 1,
    88, 80, 0, 0, 225, 0, 2, 0, 120, 80, 0, 0,
    229, 0, 9, 64, 24, 80, 0, 0, 224, 0, 246, 49,
    120, 80, 255, 255
};

unsigned char data_ov006_02136c34[72] = {
    243, 0, 248, 65, 26, 80, 0, 0, 234, 0, 232, 65,
    24, 80, 0, 0, 233, 0, 1, 0, 88, 80, 0, 0,
    237, 0, 7, 64, 26, 80, 0, 0, 228, 0, 243, 97,
    24, 80, 0, 0, 231, 0, 241, 65, 28, 80, 0, 0,
    231, 128, 1, 0, 30, 80, 0, 0, 247, 64, 241, 1,
    92, 80, 0, 0, 247, 0, 1, 0, 94, 80, 255, 255
};

unsigned char data_ov006_02136c7c[88] = {
    240, 0, 233, 65, 26, 80, 0, 0, 244, 0, 244, 65,
    28, 80, 0, 0, 244, 128, 4, 0, 30, 80, 0, 0,
    4, 64, 244, 1, 92, 80, 0, 0, 4, 0, 4, 0,
    94, 80, 0, 0, 233, 0, 252, 65, 24, 80, 0, 0,
    239, 0, 1, 64, 28, 80, 0, 0, 239, 128, 17, 0,
    30, 80, 0, 0, 255, 64, 1, 0, 92, 80, 0, 0,
    255, 0, 17, 0, 94, 80, 0, 0, 237, 0, 242, 65,
    26, 80, 255, 255
};
#pragma section forcedata end
#pragma pop
