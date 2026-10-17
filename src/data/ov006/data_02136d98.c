/* .data 0x02136d98..0x02136dfc */
extern unsigned char data_ov006_02136dd8[];
extern unsigned char data_ov006_02136dc8[];
extern unsigned char data_ov006_02136db8[];
extern unsigned char data_ov006_02136da8[];
extern unsigned char data_ov006_02136d98[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov006_02136dd8[16] = {
    240, 0, 248, 65, 13, 0, 0, 0, 224, 128, 240, 193,
    28, 0, 255, 255
};

unsigned char data_ov006_02136dc8[16] = {
    240, 128, 252, 1, 15, 0, 0, 0, 224, 128, 240, 193,
    28, 0, 255, 255
};

unsigned char data_ov006_02136db8[16] = {
    240, 0, 248, 65, 16, 0, 0, 0, 224, 128, 240, 193,
    28, 0, 255, 255
};

unsigned char data_ov006_02136da8[16] = {
    240, 0, 248, 65, 18, 0, 0, 0, 224, 128, 240, 193,
    28, 0, 255, 255
};

unsigned char data_ov006_02136d98[16] = {
    240, 0, 248, 65, 20, 0, 0, 0, 224, 128, 240, 193,
    28, 0, 255, 255
};

unsigned int data_ov006_02136de8[5] = {
    (unsigned int)&data_ov006_02136dd8, (unsigned int)&data_ov006_02136dc8, (unsigned int)&data_ov006_02136db8, (unsigned int)&data_ov006_02136da8, (unsigned int)&data_ov006_02136d98
};
#pragma section forcedata end
#pragma pop
