/* .rodata 0x020cf0cc..0x020cf120 */
extern unsigned char data_ov007_020d7e00[];
extern unsigned char data_ov007_020d7e08[];
extern unsigned char data_ov007_020d7e10[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov007_020cf0cc[21] = {
    0xffff, (unsigned int)&data_ov007_020d7e00, 41, 41, 1, 1, 0x10001, 0xffff,
    (unsigned int)&data_ov007_020d7e08, 0x290001, 0x290001, 1, 0x20029, 0x2b0029, 0xffff, (unsigned int)&data_ov007_020d7e10,
    0x290001, 0x290001, 1, 0x540029, 0x7d0029
};
#pragma section forcerodata end
