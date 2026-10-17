/* .rodata 0x02111768..0x02111784 */
extern unsigned char data_ov023_02111b30[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov023_02111768[7] = {
    0xffff, (unsigned int)&data_ov023_02111b30, 1, 1, 1, 1, 0x100c8
};
#pragma section forcerodata end
