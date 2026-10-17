/* .rodata 0x021328b4..0x021328d4 */
extern unsigned char data_ov002_0210da40[];
extern unsigned char data_ov002_0210d9a0[];
extern unsigned char data_ov002_0210d9c0[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov089_021328b4[8] = {
    0, 0, (unsigned int)&data_ov002_0210da40, (unsigned int)&data_ov002_0210d9a0, (unsigned int)&data_ov002_0210d9c0, 0, 0, 0
};
#pragma section forcerodata end
