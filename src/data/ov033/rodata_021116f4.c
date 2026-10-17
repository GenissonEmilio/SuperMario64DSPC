/* .rodata 0x021116f4..0x02111760 */
extern unsigned char data_ov033_02111b14[];

#pragma define_section forcerodata ".rodata" ".rodata" ".rodata" data_mode=far_abs
#pragma section forcerodata begin
unsigned int data_ov033_021116f4[3] = {
    0xffff, (unsigned int)&data_ov033_02111b14, 1
};

unsigned char data_ov033_02111710[16] = {
    0, 0, 0, 0, 46, 0, 0, 0, 91, 0, 0, 0,
    137, 0, 0, 0
};

unsigned char data_ov033_02111700[16] = {
    1, 0, 0, 0, 1, 0, 0, 0, 91, 0, 0, 0,
    91, 0, 0, 0
};

unsigned char data_ov033_02111720[32] = {
    182, 0, 0, 0, 228, 0, 0, 0, 17, 1, 0, 0,
    63, 1, 0, 0, 108, 1, 0, 0, 154, 1, 0, 0,
    199, 1, 0, 0, 245, 1, 0, 0
};

unsigned char data_ov033_02111740[32] = {
    34, 2, 0, 0, 80, 2, 0, 0, 125, 2, 0, 0,
    171, 2, 0, 0, 216, 2, 0, 0, 6, 3, 0, 0,
    51, 3, 0, 0, 97, 3, 0, 0
};
#pragma section forcerodata end
