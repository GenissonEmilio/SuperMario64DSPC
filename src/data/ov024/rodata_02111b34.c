/* .rodata 0x02111b34..0x02111b64 */
#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov024_02111b34[16] = {
    97, 7, 108, 7, 119, 7, 131, 7, 142, 7, 154, 7,
    165, 7, 176, 7
};

unsigned char data_ov024_02111b44[32] = {
    188, 7, 199, 7, 210, 7, 222, 7, 233, 7, 245, 7,
    0, 8, 11, 248, 23, 248, 34, 248, 46, 248, 57, 248,
    68, 248, 80, 248, 91, 248, 102, 248
};
#pragma section forcerodata end
