/* .data 0x020c2f88..0x020c2fcc */
extern unsigned char data_ov005_020c2f8c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int sMiniGmSavingCaption[1] = {
    (unsigned int)&data_ov005_020c2f8c
};

unsigned char data_ov005_020c2f8c[64] = {
    248, 64, 128, 129, 64, 65, 0, 0, 248, 64, 160, 129,
    68, 65, 0, 0, 248, 64, 192, 129, 72, 65, 0, 0,
    248, 64, 224, 129, 76, 65, 0, 0, 248, 64, 0, 128,
    80, 65, 0, 0, 248, 64, 32, 128, 84, 65, 0, 0,
    248, 64, 64, 128, 88, 65, 0, 0, 248, 64, 96, 128,
    92, 65, 255, 255
};
#pragma section forcedata end
#pragma pop
