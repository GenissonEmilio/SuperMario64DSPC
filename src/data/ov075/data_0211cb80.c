/* .data 0x0211cb80..0x0211cba4 */
extern unsigned char data_ov075_0211d21c[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned int data_ov075_0211cb80[1] = {
    (unsigned int)&data_ov075_0211d21c
};

unsigned char data_ov075_0211cb84[32] = {
    240, 64, 128, 193, 0, 32, 0, 0, 240, 64, 192, 193,
    8, 32, 0, 0, 240, 64, 0, 192, 16, 32, 0, 0,
    240, 64, 64, 192, 24, 32, 255, 255
};
#pragma section forcedata end
#pragma pop
