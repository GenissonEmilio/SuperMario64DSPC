/* .rodata 0x020ff0d0..0x020ff0ec */
#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov002_020ff0d8[4] = {
    0, 10, 0, 0
};

unsigned char data_ov002_020ff0d4[4] = {
    0, 96, 0, 0
};

unsigned char data_ov002_020ff0d0[4] = {
    0, 128, 0, 192
};

unsigned char data_ov002_020ff0dc[16] = {
    0, 0, 0, 0, 0, 96, 0, 0, 0, 96, 255, 255,
    0, 96, 255, 255
};
#pragma section forcerodata end
