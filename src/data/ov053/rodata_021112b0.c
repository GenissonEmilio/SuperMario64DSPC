/* .rodata 0x021112b0..0x021112dc */
extern unsigned char data_ov053_021123bc[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov053_021112b0[11] = {
    1, 1, 1, 0x1003f, 0xffff, (unsigned int)&data_ov053_021123bc, 1, 1,
    1, 1, 0x40003f
};
#pragma section forcerodata end
