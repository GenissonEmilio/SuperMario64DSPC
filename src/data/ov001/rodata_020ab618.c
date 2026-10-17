/* .rodata 0x020ab618..0x020ab620 */
extern unsigned char data_ov001_020ab620[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov001_020ab618[2] = {
    1, (unsigned int)&data_ov001_020ab620
};
#pragma section forcerodata end
