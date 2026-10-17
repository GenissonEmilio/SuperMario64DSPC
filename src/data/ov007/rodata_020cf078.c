/* .rodata 0x020cf078..0x020cf0cc */
extern unsigned char data_ov007_020d7e00[];
extern unsigned char data_ov007_020d7e08[];
extern unsigned char data_ov007_020d7e10[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov007_020cf078[21] = {
    0xffff, (unsigned int)&data_ov007_020d7e00, 1, 1, 1, 1, 0x10001, 0xffff,
    (unsigned int)&data_ov007_020d7e08, 0x10001, 0x10001, 1, 0x20001, 0x30001, 0xffff, (unsigned int)&data_ov007_020d7e10,
    0x10001, 0x10001, 1, 0x40001, 0x50001
};
#pragma section forcerodata end
