/* .data 0x02111928..0x02111960 */
extern unsigned char data_ov013_021117bc[];
extern unsigned char data_ov013_021117cc[];
extern unsigned char data_ov013_02111794[];
extern unsigned char data_ov013_021117d4[];

#pragma push
#pragma explicit_zero_data on
#pragma define_section forcedata ".data" ".data" ".data" data_mode=far_abs
#pragma section forcedata begin
unsigned char data_ov013_02111928[4] = {
    0, 0, 0, 0
};

unsigned int data_ov013_0211192c[6] = {
    0xb9f0301, (unsigned int)&data_ov013_021117bc, 0, 0xc8f0202, (unsigned int)&data_ov013_021117cc, 0
};

unsigned int data_ov013_02111944[7] = {
    0x8e30203, (unsigned int)&data_ov013_02111794, 0, 0x11300304, (unsigned int)&data_ov013_021117d4, 0, 0x16440105
};
#pragma section forcedata end
#pragma pop
