/* .rodata 0x021134ec..0x02113508 */
extern unsigned char data_ov020_021137cc[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov020_021134ec[7] = {
    0xffff, (unsigned int)&data_ov020_021137cc, 1, 1, 1, 91, 91
};
#pragma section forcerodata end
