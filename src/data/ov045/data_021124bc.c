/* .data 0x021124bc..0x021124ec */
extern unsigned char data_ov045_02111e64[];
extern unsigned char data_ov045_02111e60[];
extern unsigned char data_ov045_02111e84[];
extern unsigned char data_ov045_02111e68[];
extern unsigned char data_ov045_02112720[];
extern unsigned char data_ov045_02112480[];
extern unsigned char data_ov045_02112490[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov045_021124bc[2] = {
    200, (unsigned int)&data_ov045_02111e64
};

unsigned int data_ov045_021124c4[4] = {
    (unsigned int)&data_ov045_02111e60, (unsigned int)&data_ov045_02111e84, 1, (unsigned int)&data_ov045_02111e68
};

unsigned int data_ov045_021124d4[6] = {
    (unsigned int)&data_ov045_02112720, (unsigned int)&data_ov045_02112480, 0x77a0782, 0x7840783, (unsigned int)&data_ov045_02112490, 0x6400001
};
#pragma section forcedata end
#pragma pop
