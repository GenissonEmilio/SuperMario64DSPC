/* .rodata 0x02112f20..0x02112f2c */
extern unsigned char data_ov021_021137c0[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov021_02112f20[3] = {
    0xffff, (unsigned int)&data_ov021_021137c0, 1
};
#pragma section forcerodata end
