/* .rodata 0x02130174..0x021301b4 */
extern unsigned char data_ov084_02130880[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned char data_ov084_02130174[4] = {
    31, 16, 0, 0
};

unsigned char data_ov084_02130178[20] = {
    0, 3, 12, 22, 31, 31, 31, 31, 31, 31, 31, 31,
    31, 31, 31, 31, 31, 16, 0, 0
};

unsigned int data_ov084_0213018c[10] = {
    0xffff, (unsigned int)&data_ov084_02130880, 257, 0x40001, 0x40001, 0x110001, 0x110001, 0x110001,
    1, 1
};
#pragma section forcerodata end
