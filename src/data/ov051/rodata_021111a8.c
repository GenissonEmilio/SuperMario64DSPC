/* .rodata 0x021111a8..0x021111c4 */
extern unsigned char data_ov051_021114c4[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov051_021111a8[7] = {
    0xffff, (unsigned int)&data_ov051_021114c4, 1, 1, 1, 181, 181
};
#pragma section forcerodata end
