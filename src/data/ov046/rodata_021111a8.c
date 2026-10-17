/* .rodata 0x021111a8..0x021111c4 */
extern unsigned char data_ov046_02111504[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov046_021111a8[7] = {
    0xffff, (unsigned int)&data_ov046_02111504, 1, 1, 1, 1, 0x100c8
};
#pragma section forcerodata end
