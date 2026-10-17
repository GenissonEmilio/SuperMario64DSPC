/* .rodata 0x020ff014..0x020ff040 */
extern unsigned char data_ov002_0210da40[];
extern unsigned char data_ov002_0210d9a0[];
extern unsigned char data_ov002_0210d9c0[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov002_020ff014[8] = {
    32, 1, 33, 1, 34, 1, 0, 0
};

unsigned char data_ov002_020ff01c[12] = {
    150, 0, 150, 0, 144, 1, 80, 0, 144, 1, 0, 0
};

unsigned int data_ov002_020ff028[6] = {
    (unsigned int)&data_ov002_0210da40, (unsigned int)&data_ov002_0210d9a0, (unsigned int)&data_ov002_0210d9c0, 0, 0, 0
};
#pragma section forcerodata end
