/* .rodata 0x02100364..0x02100380 */
extern unsigned char data_ov002_0210d6d0[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov002_02100364[7] = {
    0xffff, (unsigned int)&data_ov002_0210d6d0, 1, 1, 1, 120, 120
};
#pragma section forcerodata end
