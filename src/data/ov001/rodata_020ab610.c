/* .rodata 0x020ab610..0x020ab618 */
extern unsigned char data_ov001_020ab630[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov001_020ab610[2] = {
    1, (unsigned int)&data_ov001_020ab630
};
#pragma section forcerodata end
