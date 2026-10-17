/* .rodata 0x020ab630..0x020ab640 */
extern unsigned char data_ov001_020ab600[];
extern unsigned char data_ov001_020ab6b0[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov001_020ab630[4] = {
    1, (unsigned int)&data_ov001_020ab600, 308, (unsigned int)&data_ov001_020ab6b0
};
#pragma section forcerodata end
