/* .rodata 0x021124ac..0x021124c4 */
extern unsigned char data_ov026_02112e40[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov026_021124ac[6] = {
    0xffff, (unsigned int)&data_ov026_02112e40, 1, 1, 1, 91
};
#pragma section forcerodata end
