/* .data 0x02133ae0..0x02133be0 */
extern unsigned char data_ov006_02133b60[];
extern unsigned char data_ov006_02133ba0[];
extern unsigned char data_ov006_02133af0[];
extern unsigned char data_ov006_02133b28[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
extern unsigned int data_ov006_02133ae0[4] ;

unsigned char data_ov006_02133b28[56] = {
    240, 0, 240, 65, 26, 1, 0, 0, 240, 0, 0, 64,
    27, 1, 0, 0, 0, 64, 240, 1, 80, 1, 0, 0,
    0, 64, 0, 0, 81, 1, 0, 0, 0, 0, 16, 0,
    83, 1, 0, 0, 248, 0, 16, 0, 51, 1, 0, 0,
    240, 0, 16, 0, 84, 1, 255, 255
};

unsigned char data_ov006_02133af0[56] = {
    240, 0, 240, 65, 23, 1, 0, 0, 240, 0, 0, 64,
    24, 1, 0, 0, 0, 64, 240, 1, 80, 1, 0, 0,
    0, 64, 0, 0, 81, 1, 0, 0, 0, 0, 16, 0,
    83, 1, 0, 0, 248, 0, 16, 0, 51, 1, 0, 0,
    240, 0, 16, 0, 84, 1, 255, 255
};

unsigned char data_ov006_02133b60[64] = {
    240, 0, 240, 65, 16, 1, 0, 0, 0, 64, 240, 1,
    80, 1, 0, 0, 240, 128, 0, 0, 17, 1, 0, 0,
    0, 0, 0, 0, 81, 1, 0, 0, 240, 128, 8, 0,
    18, 1, 0, 0, 0, 0, 8, 0, 82, 1, 0, 0,
    248, 128, 16, 0, 51, 1, 0, 0, 240, 0, 16, 0,
    84, 1, 255, 255
};

unsigned char data_ov006_02133ba0[64] = {
    240, 0, 240, 65, 20, 1, 0, 0, 240, 128, 0, 0,
    21, 1, 0, 0, 240, 128, 8, 0, 22, 1, 0, 0,
    0, 64, 240, 1, 80, 1, 0, 0, 0, 64, 0, 0,
    81, 1, 0, 0, 0, 0, 16, 0, 83, 1, 0, 0,
    248, 0, 16, 0, 51, 1, 0, 0, 240, 0, 16, 0,
    84, 1, 255, 255
};
#pragma section forcedata end
#pragma pop
