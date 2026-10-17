/* .rodata 0x020ff060..0x020ff090 */
extern unsigned char data_ov002_0210d9b8[];
extern unsigned char data_ov002_0210d9f8[];
extern unsigned char data_ov002_0210d9c8[];
extern unsigned char data_ov002_0210da48[];
extern unsigned char data_ov002_0210da50[];
extern unsigned char data_ov002_0210da00[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov002_020ff06c[3] = {
    (unsigned int)&data_ov002_0210d9b8, (unsigned int)&data_ov002_0210d9f8, (unsigned int)&data_ov002_0210d9c8
};

unsigned int data_ov002_020ff060[3] = {
    (unsigned int)&data_ov002_0210da48, (unsigned int)&data_ov002_0210da50, (unsigned int)&data_ov002_0210da00
};

unsigned char data_ov002_020ff078[24] = {
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    10, 0, 0, 0, 15, 0, 0, 0, 20, 0, 0, 0
};
#pragma section forcerodata end
