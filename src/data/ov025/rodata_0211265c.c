/* .rodata 0x0211265c..0x02112694 */
extern unsigned char data_ov025_02112b8c[];
extern unsigned char data_ov025_02112b74[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov025_0211265c[14] = {
    0xffff, (unsigned int)&data_ov025_02112b8c, 1, 1, 1, 1, 0x1005b, 0xffff,
    (unsigned int)&data_ov025_02112b74, 1, 1, 1, 1, 0x5c005b
};
#pragma section forcerodata end
