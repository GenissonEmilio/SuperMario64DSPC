/* .rodata 0x021118bc..0x021118f4 */
extern unsigned char data_ov024_021128b4[];
extern unsigned char data_ov024_021128cc[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov024_021118bc[14] = {
    0xffff, (unsigned int)&data_ov024_021128b4, 1, 0x10001, 1, 40, 1, 0xffff,
    (unsigned int)&data_ov024_021128cc, 1, 0x10001, 1, 40, 1
};
#pragma section forcerodata end
