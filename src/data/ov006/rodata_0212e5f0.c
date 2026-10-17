/* .rodata 0x0212e5f0..0x0212e62c */
extern unsigned char data_ov006_0213c6bc[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov006_0212e5f0[15] = {
    0xffff, (unsigned int)&data_ov006_0213c6bc, 1, 1, 1, 1, 1, 1,
    0x10001, 0x10001, 0x10001, 0x10001, 0x10001, 0x10001, 0x20101
};
#pragma section forcerodata end
