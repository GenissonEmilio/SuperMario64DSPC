/* .rodata 0x020ff040..0x020ff060 */
#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov002_020ff040[16] = {
    0, 0, 1, 1, 1, 0, 1, 0, 1, 0, 0, 1,
    1, 0, 0, 0
};

unsigned char data_ov002_020ff050[16] = {
    0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0,
    0, 0, 0, 0
};
#pragma section forcerodata end
