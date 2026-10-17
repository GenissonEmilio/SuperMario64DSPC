/* .rodata 0x02112ca4..0x02112cb0 */
extern unsigned char data_ov027_02113c84[];
extern unsigned char data_ov027_02113c74[];
extern unsigned char data_ov027_02113c8c[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov027_02112ca4[1] = {
    (unsigned int)&data_ov027_02113c84
};

unsigned int data_ov027_02112ca8[2] = {
    (unsigned int)&data_ov027_02113c74, (unsigned int)&data_ov027_02113c8c
};
#pragma section forcerodata end
