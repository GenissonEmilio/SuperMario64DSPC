/* .data 0x020c2f24..0x020c2f60 */
extern unsigned char data_ov005_020c2f44[];
extern unsigned char data_ov005_020c2f3c[];
extern unsigned char data_ov005_020c2f34[];
extern unsigned char data_ov005_020c2f2c[];
extern unsigned char data_ov005_020c2f24[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov005_020c2f44[8] = {
    248, 0, 248, 65, 144, 96, 255, 255
};

unsigned char data_ov005_020c2f3c[8] = {
    248, 0, 248, 65, 146, 96, 255, 255
};

unsigned char data_ov005_020c2f34[8] = {
    248, 0, 248, 65, 149, 96, 255, 255
};

unsigned char data_ov005_020c2f2c[8] = {
    252, 0, 252, 1, 148, 112, 255, 255
};

unsigned char data_ov005_020c2f24[8] = {
    252, 0, 252, 1, 180, 112, 255, 255
};

unsigned int sMiniGmRecordLabels[5] = {
    (unsigned int)&data_ov005_020c2f44, (unsigned int)&data_ov005_020c2f3c, (unsigned int)&data_ov005_020c2f34, (unsigned int)&data_ov005_020c2f2c, (unsigned int)&data_ov005_020c2f24
};
#pragma section forcedata end
#pragma pop
