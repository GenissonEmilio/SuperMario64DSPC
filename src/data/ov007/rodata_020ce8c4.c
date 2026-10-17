/* .rodata 0x020ce8c4..0x020ce8fc */
extern unsigned char data_ov007_020d7e18[];
extern unsigned char data_ov007_020d7e20[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov007_020ce8c4[14] = {
    0xffff, (unsigned int)&data_ov007_020d7e18, 1, 1, 1, 700, 0x2bc02bc, 0xffff,
    (unsigned int)&data_ov007_020d7e20, 1, 1, 1, 0x57802bc, 0x83402bc
};
#pragma section forcerodata end
