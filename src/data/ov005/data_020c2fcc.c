/* .data 0x020c2fcc..0x020c3020 */
extern unsigned char data_ov005_020c2fd0[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int sMiniGmCaption[1] = {
    (unsigned int)&data_ov005_020c2fd0
};

unsigned char data_ov005_020c2fd0[80] = {
    248, 64, 128, 129, 0, 65, 0, 0, 248, 64, 160, 129,
    4, 65, 0, 0, 248, 64, 192, 129, 8, 65, 0, 0,
    248, 64, 224, 129, 12, 65, 0, 0, 248, 64, 0, 128,
    16, 65, 0, 0, 248, 64, 32, 128, 20, 65, 0, 0,
    248, 64, 64, 128, 24, 65, 0, 0, 248, 64, 96, 128,
    28, 65, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0
};
#pragma section forcedata end
#pragma pop
