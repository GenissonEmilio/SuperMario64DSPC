/* .data 0x02136cd4..0x02136d0c */
extern unsigned char data_ov006_02136cd8[];
extern unsigned char data_ov006_02136ce8[];
extern unsigned char data_ov006_02136cfc[];
extern unsigned char data_ov006_02136ce0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov006_02136cd4[1] = {
    (unsigned int)&data_ov006_02136cd8
};

unsigned char data_ov006_02136ce8[8] = {
    240, 0, 240, 129, 0, 16, 255, 255
};

unsigned char data_ov006_02136ce0[8] = {
    240, 128, 252, 65, 6, 16, 255, 255
};

unsigned char data_ov006_02136cd8[8] = {
    248, 0, 240, 129, 16, 16, 255, 255
};

unsigned int data_ov006_02136cf0[3] = {
    (unsigned int)&data_ov006_02136ce8, (unsigned int)&data_ov006_02136cfc, (unsigned int)&data_ov006_02136ce0
};

unsigned char data_ov006_02136cfc[16] = {
    240, 128, 248, 129, 4, 16, 0, 0, 240, 128, 5, 64,
    6, 16, 255, 255
};
#pragma section forcedata end
#pragma pop
