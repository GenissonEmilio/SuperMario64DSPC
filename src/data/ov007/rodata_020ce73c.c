/* .rodata 0x020ce73c..0x020ce774 */
extern unsigned char data_ov007_020d7e18[];
extern unsigned char data_ov007_020d7e20[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov007_020ce73c[14] = {
    0xffff, (unsigned int)&data_ov007_020d7e18, 1, 1, 1, 1, 1, 0xffff,
    (unsigned int)&data_ov007_020d7e20, 1, 1, 0x10001, 1, 1
};
#pragma section forcerodata end
