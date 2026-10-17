/* .data 0x0211cbc4..0x0211cc44 */
extern unsigned char data_ov075_0211cef4[];
extern unsigned char data_ov075_0211cf24[];
extern unsigned char data_ov075_0211cf54[];
extern unsigned char data_ov075_0211cf84[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov075_0211cc04[32] = {
    244, 0, 222, 17, 27, 225, 0, 0, 1, 0, 213, 17,
    28, 225, 0, 0, 14, 0, 197, 17, 30, 225, 0, 0,
    249, 0, 205, 17, 29, 225, 255, 255
};

unsigned char data_ov075_0211cbe4[32] = {
    244, 0, 10, 0, 27, 225, 0, 0, 1, 0, 19, 0,
    28, 225, 0, 0, 14, 0, 35, 0, 30, 225, 0, 0,
    249, 0, 27, 0, 29, 225, 255, 255
};

unsigned char data_ov075_0211cbc4[32] = {
    216, 0, 240, 129, 67, 161, 0, 0, 216, 128, 16, 128,
    71, 161, 0, 0, 232, 0, 216, 193, 24, 160, 0, 0,
    232, 128, 0, 192, 139, 161, 255, 255
};

unsigned int data_ov075_0211cc24[8] = {
    (unsigned int)&data_ov075_0211cef4, 4, (unsigned int)&data_ov075_0211cf24, 2, (unsigned int)&data_ov075_0211cf54, 4, (unsigned int)&data_ov075_0211cf84, 2
};
#pragma section forcedata end
#pragma pop
