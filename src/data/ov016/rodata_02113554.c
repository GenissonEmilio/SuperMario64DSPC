/* .rodata 0x02113554..0x02113570 */
extern unsigned char data_ov016_02113af8[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov016_02113554[7] = {
    0xffff, (unsigned int)&data_ov016_02113af8, 1, 1, 1, 91, 91
};
#pragma section forcerodata end
