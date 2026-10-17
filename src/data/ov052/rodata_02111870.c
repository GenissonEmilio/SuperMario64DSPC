/* .rodata 0x02111870..0x0211188c */
extern unsigned char data_ov052_02111c7c[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov052_02111870[7] = {
    0xffff, (unsigned int)&data_ov052_02111c7c, 1, 1, 1, 1, 0x100b5
};
#pragma section forcerodata end
