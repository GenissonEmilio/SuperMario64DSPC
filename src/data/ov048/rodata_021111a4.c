/* .rodata 0x021111a4..0x021111c0 */
extern unsigned char data_ov048_021115bc[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov048_021111a4[7] = {
    0xffff, (unsigned int)&data_ov048_021115bc, 1, 0x10064, 1, 1, 0x10064
};
#pragma section forcerodata end
