/* .rodata 0x0211134c..0x02111384 */
extern unsigned char data_ov053_021123b0[];
extern unsigned char data_ov053_021123bc[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov053_0211134c[14] = {
    0xffff, (unsigned int)&data_ov053_021123b0, 1, 1, 1, 1, 0x1001e, 0xffff,
    (unsigned int)&data_ov053_021123bc, 1, 1, 1, 1, 0x1f001e
};
#pragma section forcerodata end
