/* .rodata 0x021111fc..0x02111210 */
extern unsigned char data_ov053_021123b0[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov053_021111fc[2] = {
    0xffff, (unsigned int)&data_ov053_021123b0
};

unsigned char data_ov053_02111204[12] = {
    1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0
};
#pragma section forcerodata end
