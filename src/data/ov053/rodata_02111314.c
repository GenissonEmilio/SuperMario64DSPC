/* .rodata 0x02111314..0x0211134c */
extern unsigned char data_ov053_021123b0[];
extern unsigned char data_ov053_021123bc[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov053_02111314[14] = {
    0xffff, (unsigned int)&data_ov053_021123b0, 1, 1, 1, 1, 0x1004b, 0xffff,
    (unsigned int)&data_ov053_021123bc, 1, 1, 1, 1, 0x4c004b
};
#pragma section forcerodata end
