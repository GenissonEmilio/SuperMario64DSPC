/* .rodata 0x020ab620..0x020ab630 */
extern unsigned char data_ov001_020ab604[];
extern unsigned char data_ov001_020ab640[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov001_020ab620[4] = {
    1, (unsigned int)&data_ov001_020ab604, 112, (unsigned int)&data_ov001_020ab640
};
#pragma section forcerodata end
