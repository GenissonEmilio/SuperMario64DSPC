/* .rodata 0x0211291c..0x02112938 */
extern unsigned char data_ov032_02112edc[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov032_0211291c[7] = {
    0xffff, (unsigned int)&data_ov032_02112edc, 1, 1, 1, 91, 91
};
#pragma section forcerodata end
