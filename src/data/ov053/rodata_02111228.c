/* .rodata 0x02111228..0x021112a4 */
extern unsigned char data_ov053_021123b0[];
extern unsigned char data_ov053_021123bc[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov053_02111228[12] = {
    1, 0, 0, 0, 1, 0, 0, 0, 90, 0, 91, 0
};

unsigned int data_ov053_02111234[4] = {
    0xffff, (unsigned int)&data_ov053_021123b0, 1, 1
};

unsigned int data_ov053_02111244[10] = {
    1, 1, 0x1002c, 0xffff, (unsigned int)&data_ov053_021123bc, 1, 1, 1,
    1, 0x2d002c
};

unsigned int data_ov053_0211126c[14] = {
    0xffff, (unsigned int)&data_ov053_021123b0, 1, 1, 1, 1, 0x1001e, 0xffff,
    (unsigned int)&data_ov053_021123bc, 1, 1, 1, 1, 0x1f001e
};
#pragma section forcerodata end
