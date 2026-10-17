/* .data 0x021339fc..0x02133a5c */
extern unsigned char data_ov006_02133a34[];
extern unsigned char data_ov006_02133a2c[];
extern unsigned char data_ov006_02133a24[];
extern unsigned char data_ov006_02133a1c[];
extern unsigned char data_ov006_02133a14[];
extern unsigned char data_ov006_02133a0c[];
extern unsigned char data_ov006_02133a04[];
extern unsigned char data_ov006_021339fc[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov006_02133a34[8] = {
    252, 0, 252, 1, 12, 1, 255, 255
};

unsigned char data_ov006_02133a2c[8] = {
    251, 0, 252, 1, 236, 0, 255, 255
};

unsigned char data_ov006_02133a24[8] = {
    252, 0, 252, 1, 204, 0, 255, 255
};

unsigned char data_ov006_02133a1c[8] = {
    248, 0, 248, 65, 140, 0, 255, 255
};

unsigned char data_ov006_02133a14[8] = {
    248, 0, 248, 65, 6, 0, 255, 255
};

unsigned char data_ov006_02133a0c[8] = {
    248, 0, 248, 65, 4, 0, 255, 255
};

unsigned char data_ov006_02133a04[8] = {
    248, 0, 248, 65, 2, 0, 255, 255
};

unsigned char data_ov006_021339fc[8] = {
    248, 0, 248, 65, 0, 0, 255, 255
};

unsigned int data_ov006_02133a3c[8] = {
    (unsigned int)&data_ov006_02133a34, (unsigned int)&data_ov006_02133a2c, (unsigned int)&data_ov006_02133a24, (unsigned int)&data_ov006_02133a1c, (unsigned int)&data_ov006_02133a14, (unsigned int)&data_ov006_02133a0c, (unsigned int)&data_ov006_02133a04, (unsigned int)&data_ov006_021339fc
};
#pragma section forcedata end
#pragma pop
