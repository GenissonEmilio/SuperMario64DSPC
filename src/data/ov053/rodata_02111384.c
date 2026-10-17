/* .rodata 0x02111384..0x021113ac */
extern unsigned char data_ov053_021123a4[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov053_02111384[10] = {
    0xffff, (unsigned int)&data_ov053_021123a4, 257, 0x5a0101, 0xb40101, 0x10e0101, 0x1680101, 0x1c20101,
    0xb00001, 0xb00001
};
#pragma section forcerodata end
