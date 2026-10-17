/* .rodata 0x02112a7c..0x02112a98 */
extern unsigned char data_ov018_02112ea8[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov018_02112a7c[7] = {
    0xffff, (unsigned int)&data_ov018_02112ea8, 1, 1, 1, 91, 91
};
#pragma section forcerodata end
