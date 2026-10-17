/* .rodata 0x02114698..0x021146b4 */
extern unsigned char data_ov030_02114e08[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov030_02114698[7] = {
    0xffff, (unsigned int)&data_ov030_02114e08, 1, 1, 1, 1, 0x1005b
};
#pragma section forcerodata end
