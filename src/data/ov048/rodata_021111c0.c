/* .rodata 0x021111c0..0x021111ec */
extern unsigned char data_ov048_021115bc[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov048_021111c0[11] = {
    0xffff, (unsigned int)&data_ov048_021115bc, 1, 1, 1, 0x10001, 0x10001, 0x10001,
    0x10001, 0x10001, 0x10001
};
#pragma section forcerodata end
