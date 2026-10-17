/* .rodata 0x020ff0ac..0x020ff0d0 */
extern unsigned char data_ov002_0210de28[];
extern unsigned char data_ov002_0210de08[];
extern unsigned char data_ov002_0210de20[];
extern unsigned char data_ov002_0210da40[];
extern unsigned char data_ov002_0210d9a0[];
extern unsigned char data_ov002_0210d9c0[];
extern unsigned char data_ov002_0210de40[];
extern unsigned char data_ov002_0210de10[];
extern unsigned char data_ov002_0210de00[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov002_020ff0b8[3] = {
    (unsigned int)&data_ov002_0210de28, (unsigned int)&data_ov002_0210de08, (unsigned int)&data_ov002_0210de20
};

unsigned int data_ov002_020ff0ac[3] = {
    (unsigned int)&data_ov002_0210da40, (unsigned int)&data_ov002_0210d9a0, (unsigned int)&data_ov002_0210d9c0
};

unsigned int data_ov002_020ff0c4[3] = {
    (unsigned int)&data_ov002_0210de40, (unsigned int)&data_ov002_0210de10, (unsigned int)&data_ov002_0210de00
};
#pragma section forcerodata end
