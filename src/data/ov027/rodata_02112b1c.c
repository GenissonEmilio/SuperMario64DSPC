/* .rodata 0x02112b1c..0x02112b38 */
extern unsigned char data_ov027_02113000[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov027_02112b1c[7] = {
    0xffff, (unsigned int)&data_ov027_02113000, 1, 1, 1, 91, 91
};
#pragma section forcerodata end
