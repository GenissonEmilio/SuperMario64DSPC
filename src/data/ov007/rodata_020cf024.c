/* .rodata 0x020cf024..0x020cf078 */
extern unsigned char data_ov007_020d7e00[];
extern unsigned char data_ov007_020d7e08[];
extern unsigned char data_ov007_020d7e10[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov007_020cf024[21] = {
    0xffff, (unsigned int)&data_ov007_020d7e00, 852, 852, 1, 1, 0x10001, 0xffff,
    (unsigned int)&data_ov007_020d7e08, 1, 1, 1, 0x20354, 0x3560354, 0xffff, (unsigned int)&data_ov007_020d7e10,
    1, 1, 1, 0x6aa0354, 0x9fe0354
};
#pragma section forcerodata end
