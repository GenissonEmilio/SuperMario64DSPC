/* .rodata 0x02112f3c..0x02112f58 */
extern unsigned char data_ov021_021137e0[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov021_02112f3c[7] = {
    0xffff, (unsigned int)&data_ov021_021137e0, 1, 1, 1, 181, 181
};
#pragma section forcerodata end
