/* .rodata 0x021301b4..0x02130204 */
extern unsigned char data_ov084_02130880[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov084_021301b4[20] = {
    1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0,
    1, 0, 0, 0, 1, 0, 4, 0
};

unsigned int data_ov084_021301c8[15] = {
    0xffff, (unsigned int)&data_ov084_02130880, 1, 1, 1, 0x10001, 0x10001, 0x10001,
    0x20001, 0x20001, 0x20001, 0x20001, 0x20001, 0x20001, 1
};
#pragma section forcerodata end
