/* .rodata 0x021112dc..0x02111314 */
extern unsigned char data_ov053_021123b0[];
extern unsigned char data_ov053_021123bc[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov053_021112dc[14] = {
    0xffff, (unsigned int)&data_ov053_021123b0, 1, 1, 1, 1, 0x10008, 0xffff,
    (unsigned int)&data_ov053_021123bc, 1, 1, 1, 1, 0x90008
};
#pragma section forcerodata end
