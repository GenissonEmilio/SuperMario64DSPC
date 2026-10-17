/* .rodata 0x02111210..0x02111228 */
extern unsigned char data_ov053_021123bc[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov053_02111210[8] = {
    1, 0, 0, 0, 90, 0, 1, 0
};

unsigned int data_ov053_02111218[4] = {
    0xffff, (unsigned int)&data_ov053_021123bc, 1, 1
};
#pragma section forcerodata end
