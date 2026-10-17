/* .rodata 0x021116d8..0x021116e0 */
extern unsigned char data_ov033_02111b14[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov033_021116d8[2] = {
    0xffff, (unsigned int)&data_ov033_02111b14
};
#pragma section forcerodata end
