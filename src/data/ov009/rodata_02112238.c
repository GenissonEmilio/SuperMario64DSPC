/* .rodata 0x02112238..0x02112254 */
extern unsigned char data_ov009_02112b7c[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov009_02112238[7] = {
    0xffff, (unsigned int)&data_ov009_02112b7c, 1, 1, 1, 91, 91
};
#pragma section forcerodata end
