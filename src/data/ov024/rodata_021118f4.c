/* .rodata 0x021118f4..0x02111928 */
extern unsigned char data_ov024_021128e8[];
extern unsigned char data_ov024_021128c0[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov024_021118f4[6] = {
    0xffff, (unsigned int)&data_ov024_021128e8, 1, 1, 361, 1
};

unsigned int data_ov024_0211190c[7] = {
    1, 0xffff, (unsigned int)&data_ov024_021128c0, 1, 1, 1, 1
};
#pragma section forcerodata end
