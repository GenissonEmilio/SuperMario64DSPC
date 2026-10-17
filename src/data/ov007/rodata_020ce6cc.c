/* .rodata 0x020ce6cc..0x020ce704 */
extern unsigned char data_ov007_020d7e18[];
extern unsigned char data_ov007_020d7e20[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov007_020ce6cc[14] = {
    0xffff, (unsigned int)&data_ov007_020d7e18, 1, 1, 1, 48, 0x300030, 0xffff,
    (unsigned int)&data_ov007_020d7e20, 1, 1, 0x10001, 0x600030, 0x900030
};
#pragma section forcerodata end
