/* .data 0x02133fb0..0x02134028 */
extern unsigned char data_ov006_02134000[];
extern unsigned char data_ov006_02133ff0[];
extern unsigned char data_ov006_02133fe0[];
extern unsigned char data_ov006_02133fd0[];
extern unsigned char data_ov006_02133fc0[];
extern unsigned char data_ov006_02133fb0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov006_02134000[16] = {
    248, 64, 224, 129, 0, 0, 0, 0, 248, 64, 0, 128,
    4, 0, 255, 255
};

unsigned char data_ov006_02133ff0[16] = {
    248, 64, 224, 129, 64, 0, 0, 0, 248, 64, 0, 128,
    68, 0, 255, 255
};

unsigned char data_ov006_02133fe0[16] = {
    248, 64, 224, 129, 128, 0, 0, 0, 248, 64, 0, 128,
    132, 0, 255, 255
};

unsigned char data_ov006_02133fd0[16] = {
    248, 64, 224, 129, 192, 0, 0, 0, 248, 64, 0, 128,
    196, 0, 255, 255
};

unsigned char data_ov006_02133fc0[16] = {
    248, 64, 224, 129, 0, 1, 0, 0, 248, 64, 0, 128,
    4, 1, 255, 255
};

unsigned char data_ov006_02133fb0[16] = {
    248, 64, 224, 129, 64, 1, 0, 0, 248, 64, 0, 128,
    68, 1, 255, 255
};

unsigned int data_ov006_02134010[6] = {
    (unsigned int)&data_ov006_02134000, (unsigned int)&data_ov006_02133ff0, (unsigned int)&data_ov006_02133fe0, (unsigned int)&data_ov006_02133fd0, (unsigned int)&data_ov006_02133fc0, (unsigned int)&data_ov006_02133fb0
};
#pragma section forcedata end
#pragma pop
