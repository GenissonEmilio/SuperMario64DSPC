/* .rodata 0x021111a8..0x021111c4 */
extern unsigned char data_ov057_021114e8[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov057_021111a8[7] = {
    0xffff, (unsigned int)&data_ov057_021114e8, 1, 1, 361, 1, 1
};
#pragma section forcerodata end
