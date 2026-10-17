/* .rodata 0x021112a4..0x021112b0 */
extern unsigned char data_ov053_021123b0[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov053_021112a4[3] = {
    0xffff, (unsigned int)&data_ov053_021123b0, 1
};
#pragma section forcerodata end
