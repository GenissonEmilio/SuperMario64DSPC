/* .data 0x020c2f60..0x020c2f88 */
extern unsigned char data_ov005_020c2f68[];
extern unsigned char data_ov005_020c2f78[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int sMiniGmNewBadge[2] = {
    (unsigned int)&data_ov005_020c2f68, (unsigned int)&data_ov005_020c2f78
};

unsigned char data_ov005_020c2f68[16] = {
    248, 64, 224, 129, 198, 96, 0, 0, 248, 64, 0, 128,
    202, 96, 255, 255
};

unsigned char data_ov005_020c2f78[16] = {
    248, 64, 224, 129, 198, 0, 0, 0, 248, 64, 0, 128,
    202, 0, 255, 255
};
#pragma section forcedata end
#pragma pop
