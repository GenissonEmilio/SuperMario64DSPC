/* .rodata 0x02111e68..0x02111e84 */
extern unsigned char data_ov045_02112488[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov045_02111e68[7] = {
    0xffff, (unsigned int)&data_ov045_02112488, 1, 1, 1, 1, 0x100c8
};
#pragma section forcerodata end
