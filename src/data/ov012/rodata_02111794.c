/* .rodata 0x02111794..0x021117b0 */
extern unsigned char data_ov012_02111be8[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov012_02111794[7] = {
    0xffff, (unsigned int)&data_ov012_02111be8, 1, 1, 1, 91, 91
};
#pragma section forcerodata end
