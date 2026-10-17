/* .rodata 0x021115cc..0x021115e0 */
extern unsigned char data_ov056_02112be0[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov056_021115cc[4] = {
    0, 16, 0, 0
};

unsigned int data_ov056_021115d0[4] = {
    0xffff, (unsigned int)&data_ov056_02112be0, 1, 1
};
#pragma section forcerodata end
